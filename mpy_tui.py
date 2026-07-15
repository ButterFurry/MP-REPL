 
import sys
 
try:
    import utime as time
except ImportError:
    import time
 
try:
    import select
    _HAS_SELECT = True
except ImportError:
    _HAS_SELECT = False
 
try:
    import termios
    _HAS_TERMIOS = True
except ImportError:
    _HAS_TERMIOS = False
 
 
# --------------------------------------------------------------------
# Colors / attributes
# --------------------------------------------------------------------
 
class Colors:
    BLACK = 30
    RED = 31
    GREEN = 32
    YELLOW = 33
    BLUE = 34
    MAGENTA = 35
    CYAN = 36
    WHITE = 37
    DEFAULT = 39
 
 
_ESC = "\x1b"
_CSI = _ESC + "["
 
 
def _sgr(fg=None, bg=None, bold=False, underline=False, reverse=False):
    """Build a 'Select Graphic Rendition' escape sequence."""
    codes = []
    if bold:
        codes.append("1")
    if underline:
        codes.append("4")
    if reverse:
        codes.append("7")
    if fg is not None:
        codes.append(str(fg))
    if bg is not None:
        codes.append(str(bg + 10))
    if not codes:
        return ""
    return _CSI + ";".join(codes) + "m"
 
 
_RESET = _CSI + "0m"
 
 
# --------------------------------------------------------------------
# Box-drawing character sets
# --------------------------------------------------------------------
 
_BOX_STYLES = {
    "single": dict(tl="+", tr="+", bl="+", br="+", h="-", v="|"),
    "unicode": dict(tl="\u250c", tr="\u2510", bl="\u2514", br="\u2518",
                     h="\u2500", v="\u2502"),
}
 
 
# --------------------------------------------------------------------
# Key name constants returned by Screen.getkey()
# --------------------------------------------------------------------
 
KEY_UP = "UP"
KEY_DOWN = "DOWN"
KEY_LEFT = "LEFT"
KEY_RIGHT = "RIGHT"
KEY_ENTER = "ENTER"
KEY_ESC = "ESC"
KEY_BACKSPACE = "BACKSPACE"
KEY_TAB = "TAB"
KEY_HOME = "HOME"
KEY_END = "END"
KEY_DEL = "DEL"
 
_ESCAPE_SEQUENCES = {
    "[A": KEY_UP, "[B": KEY_DOWN, "[C": KEY_RIGHT, "[D": KEY_LEFT,
    "[H": KEY_HOME, "[F": KEY_END, "[3~": KEY_DEL,
    "OA": KEY_UP, "OB": KEY_DOWN, "OC": KEY_RIGHT, "OD": KEY_LEFT,
}
 
 
# --------------------------------------------------------------------
# Screen
# --------------------------------------------------------------------
 
class Screen:
    def __init__(self, width=80, height=24, use_color=True, out=None, inp=None):
        self.width = width
        self.height = height
        self.use_color = use_color
        self._out = out or sys.stdout
        self._in = inp or sys.stdin
        self._old_termios = None
        self._started = False
 
    # ---- lifecycle -----------------------------------------------
 
    def start(self):
        """Enter raw mode, switch to alternate screen, hide cursor."""
        if _HAS_TERMIOS:
            try:
                self._old_termios = self._set_raw(self._in.fileno())
            except Exception:
                self._old_termios = None
        self._write(_CSI + "?1049h")   # alternate screen buffer
        self.hide_cursor()
        self.clear()
        self._started = True
 
    def stop(self):
        """Restore terminal to its normal state. Always safe to call."""
        if not self._started:
            return
        self.show_cursor()
        self._write(_RESET)
        self._write(_CSI + "?1049l")  # leave alternate screen buffer
        self._flush()
        if self._old_termios is not None:
            try:
                termios.tcsetattr(self._in.fileno(), termios.TCSADRAIN,
                                   self._old_termios)
            except Exception:
                pass
        self._started = False
 
    @staticmethod
    def _set_raw(fd):
        old = termios.tcgetattr(fd)
        new = list(old)
        IFLAG, OFLAG, CFLAG, LFLAG, ISPEED, OSPEED, CC = range(7)
 
        def bit(name):
            return getattr(termios, name, 0)
 
        new[IFLAG] &= ~(bit("BRKINT") | bit("ICRNL") | bit("INPCK") |
                         bit("ISTRIP") | bit("IXON"))
        new[OFLAG] &= ~(bit("OPOST"))
        new[CFLAG] |= bit("CS8")
        new[LFLAG] &= ~(bit("ECHO") | bit("ICANON") | bit("IEXTEN") | bit("ISIG"))
        try:
            new[CC][termios.VMIN] = 1
            new[CC][termios.VTIME] = 0
        except Exception:
            pass
        termios.tcsetattr(fd, termios.TCSAFLUSH, new)
        return old
 
    # ---- low level output ------------------------------------------
 
    def _write(self, s):
        self._out.write(s)
 
    def _flush(self):
        try:
            self._out.flush()
        except AttributeError:
            pass
 
    # ---- drawing primitives ----------------------------------------
 
    def clear(self):
        self._write(_CSI + "2J" + _CSI + "H")
 
    erase = clear
 
    def move(self, row, col):
        self._write(_CSI + "%d;%dH" % (row + 1, col + 1))
 
    def hide_cursor(self):
        self._write(_CSI + "?25l")
 
    def show_cursor(self):
        self._write(_CSI + "?25h")
 
    def addstr(self, row, col, text, fg=None, bg=None, bold=False,
               underline=False, reverse=False):

        self.move(row, col)
        if self.use_color:
            self._write(_sgr(fg, bg, bold, underline, reverse))
            self._write(text)
            self._write(_RESET)
        else:
            self._write(text)
 
    def hline(self, row, col, length, ch="-"):
        self.addstr(row, col, ch * length)
 
    def vline(self, row, col, length, ch="|"):
        for i in range(length):
            self.addstr(row + i, col, ch)
 
    def box(self, row, col, width, height, title=None, style="single",
            fg=None, bold=False):

        s = _BOX_STYLES.get(style, _BOX_STYLES["single"])
        top = s["tl"] + s["h"] * (width - 2) + s["tr"]
        bot = s["bl"] + s["h"] * (width - 2) + s["br"]
        self.addstr(row, col, top, fg=fg, bold=bold)
        for i in range(1, height - 1):
            self.addstr(row + i, col, s["v"], fg=fg, bold=bold)
            self.addstr(row + i, col + width - 1, s["v"], fg=fg, bold=bold)
        self.addstr(row + height - 1, col, bot, fg=fg, bold=bold)
        if title:
            label = " %s " % title
            self.addstr(row, col + 2, label, fg=fg, bold=bold)
 
    def fill(self, row, col, width, height, ch=" ", bg=None):
        for i in range(height):
            self.addstr(row + i, col, ch * width, bg=bg)
 
    def refresh(self):
        self._flush()
 
    def beep(self):
        self._write("\x07")
        self._flush()
 
    # ---- input --------------------------------------------------
 
    def _data_ready(self, timeout):
 
        if _HAS_SELECT:
            try:
                r, _, _ = select.select([self._in], [], [], timeout)
                return bool(r)
            except Exception:
                pass
        return None
 
    def _read1(self, timeout=0):

        ready = self._data_ready(timeout)
        if ready is False:
            return None
        # ready is True, or None (unknown -- best effort blocking read)
        ch = self._in.read(1)
        return ch if ch else None
 
    def getch(self, timeout=None):
 
        return self._read1(0 if timeout is None else timeout) if timeout is not None \
            else self._read1(999999)
 
    def getkey(self, timeout=None):
 
        ch = self.getch(timeout)
        if ch is None:
            return None
        if ch == "\x1b":
            # Might be a lone ESC, or the start of an escape sequence.
            seq = ""
            for _ in range(4):
                nxt = self._read1(0.02)
                if nxt is None:
                    break
                seq += nxt
                if seq in _ESCAPE_SEQUENCES:
                    return _ESCAPE_SEQUENCES[seq]
            return KEY_ESC if not seq else seq
        if ch in ("\r", "\n"):
            return KEY_ENTER
        if ch in ("\x7f", "\x08"):
            return KEY_BACKSPACE
        if ch == "\t":
            return KEY_TAB
        return ch
 
 
# --------------------------------------------------------------------
# wrapper() -- curses.wrapper() equivalent
# --------------------------------------------------------------------
 
def wrapper(func, *args, **kwargs):
 
    scr = Screen()
    scr.start()
    try:
        return func(scr, *args, **kwargs)
    finally:
        scr.stop()
 
 
# --------------------------------------------------------------------
# Widgets
# --------------------------------------------------------------------
 
def menu(scr, items, row=0, col=0, title=None, fg=Colors.CYAN):
  
    sel = 0
    width = max(len(str(i)) for i in items) + 4
    height = len(items) + 2
    if title:
        width = max(width, len(title) + 4)
 
    while True:
        scr.box(row, col, width, height, title=title, fg=fg)
        for idx, item in enumerate(items):
            text = str(item)
            pad = text + " " * (width - 4 - len(text))
            if idx == sel:
                scr.addstr(row + 1 + idx, col + 2, pad, reverse=True)
            else:
                scr.addstr(row + 1 + idx, col + 2, pad)
        scr.refresh()
 
        key = scr.getkey()
        if key in (KEY_UP, "k"):
            sel = (sel - 1) % len(items)
        elif key in (KEY_DOWN, "j"):
            sel = (sel + 1) % len(items)
        elif key == KEY_ENTER:
            return sel
        elif key == KEY_ESC:
            return None
 
 
def input_box(scr, row=0, col=0, prompt="", width=30, fg=Colors.YELLOW):
  
    buf = ""
    box_width = width + 2
    scr.box(row, col, box_width, 3, title=prompt, fg=fg)
    while True:
        display = buf[-(width - 1):] if len(buf) >= width else buf
        scr.addstr(row + 1, col + 1, display + " " * (width - len(display)))
        scr.move(row + 1, col + 1 + len(display))
        scr.show_cursor()
        scr.refresh()
 
        key = scr.getkey()
        if key == KEY_ENTER:
            scr.hide_cursor()
            return buf
        elif key == KEY_ESC:
            scr.hide_cursor()
            return None
        elif key == KEY_BACKSPACE:
            buf = buf[:-1]
        elif key and len(key) == 1 and key.isprintable():
            buf += key
 
 
def message_box(scr, text, row=None, col=None, title=None, fg=Colors.WHITE):
 
    lines = text.split("\n")
    width = max(len(l) for l in lines) + 4
    height = len(lines) + 2
    row = row if row is not None else max(0, (scr.height - height) // 2)
    col = col if col is not None else max(0, (scr.width - width) // 2)
    scr.box(row, col, width, height, title=title, fg=fg)
    for i, line in enumerate(lines):
        scr.addstr(row + 1 + i, col + 2, line)
    scr.refresh()
    scr.getkey()
 
 
def progress_bar(scr, row, col, width, percent, label=None, fg=Colors.GREEN):
 
    percent = max(0, min(100, percent))
    inner = width - 2
    filled = int(inner * percent / 100)
    bar = "#" * filled + "-" * (inner - filled)
    scr.addstr(row, col, "[" + bar + "]", fg=fg)
    text = " %d%%" % percent
    if label:
        text = " " + label + text
    scr.addstr(row, col + width + 1, text)
    scr.refresh()