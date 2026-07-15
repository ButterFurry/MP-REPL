from mpy_tui import (
    Colors, KEY_UP, KEY_DOWN, KEY_ENTER, KEY_ESC, KEY_LEFT, KEY_RIGHT,
    input_box, message_box,
)
 
 
class ConfigMenu:
    def __init__(self, scr, path, schema, row=1, col=1, title="Settings"):
        self.scr = scr
        self.path = path
        self.schema = schema
        self.row = row
        self.col = col
        self.title = title
        self.cfg = self._load()
        self.sel = 0
        self.dirty = False
 
    # ---- persistence -------------------------------------------------
 
    def _load(self):
        ns = {}
        try:
            with open(self.path) as f:
                src = f.read()
            exec(src, ns)
        except OSError:
            pass  # file doesn't exist yet -- use defaults
        except Exception:
            pass  # malformed file -- fall back to defaults for all fields
        cfg = {}
        for key, ftype, default, extra in self.schema:
            cfg[key] = ns.get(key, default)
        return cfg
 
    @staticmethod
    def _line_defines(line, key):
        """True if `line` is a top-level `key = ...` assignment."""
        stripped = line.strip()
        if not stripped or stripped.startswith("#"):
            return False
        if "=" not in stripped:
            return False
        name = stripped.split("=", 1)[0].strip()
        return name == key
 
    def save(self):
        try:
            with open(self.path) as f:
                lines = f.readlines()
        except OSError:
            lines = []
 
        written = set()
        out_lines = []
        for line in lines:
            matched_key = None
            for key, ftype, default, extra in self.schema:
                if self._line_defines(line, key):
                    matched_key = key
                    break
            if matched_key is not None:
                out_lines.append("%s = %r\n" % (matched_key, self.cfg[matched_key]))
                written.add(matched_key)
            else:
                out_lines.append(line)
 
        missing = [k for (k, t, d, e) in self.schema if k not in written]
        if missing:
            if out_lines and not out_lines[-1].endswith("\n"):
                out_lines[-1] += "\n"
            out_lines.append("\n# -- added by config_menu --\n")
            for key in missing:
                out_lines.append("%s = %r\n" % (key, self.cfg[key]))
 
        with open(self.path, "w") as f:
            f.writelines(out_lines)
        self.dirty = False
 
    # ---- rendering -----------------------------------------------------
 
    def _field_text(self, key, ftype, value):
        if ftype == "bool":
            shown = "on" if value else "off"
        else:
            shown = str(value)
        return "%-14s %s" % (key, shown)
 
    def _draw(self):
        n = len(self.schema)
        width = max(len(self._field_text(k, t, self.cfg.get(k, d)))
                     for (k, t, d, e) in self.schema) + 4
        width = max(width, len(self.title) + 6)
        height = n + 4  # fields + border + hint line + save/discard row
 
        self.scr.clear()
        star = "*" if self.dirty else ""
        self.scr.box(self.row, self.col, width, height,
                      title=self.title + star, fg=Colors.CYAN)
 
        for i, (key, ftype, default, extra) in enumerate(self.schema):
            value = self.cfg.get(key, default)
            text = self._field_text(key, ftype, value)
            pad = text + " " * (width - 4 - len(text))
            if i == self.sel:
                self.scr.addstr(self.row + 1 + i, self.col + 2, pad, reverse=True)
            else:
                self.scr.addstr(self.row + 1 + i, self.col + 2, pad)
 
        hint = "Enter: edit  s: save  q/ESC: quit"
        self.scr.addstr(self.row + n + 2, self.col + 2, hint[:width - 4],
                          fg=Colors.YELLOW)
        self.scr.refresh()
 
    # ---- editing ---------------------------------------------------
 
    def _edit_field(self, key, ftype, extra):
        current = self.cfg.get(key)
 
        if ftype == "bool":
            self.cfg[key] = not current
            self.dirty = True
 
        elif ftype == "choice":
            options = extra or []
            if options:
                idx = options.index(current) if current in options else 0
                self.cfg[key] = options[(idx + 1) % len(options)]
                self.dirty = True
 
        elif ftype == "int":
            box_row = self.row + len(self.schema) + 4
            new_val = input_box(self.scr, row=box_row, col=self.col,
                                  prompt=key, width=20)
            if new_val is not None and new_val != "":
                try:
                    n = int(new_val)
                    if extra:
                        lo, hi = extra
                        n = max(lo, min(hi, n))
                    self.cfg[key] = n
                    self.dirty = True
                except ValueError:
                    message_box(self.scr, "'%s' is not a number" % new_val,
                                 title="Invalid input", fg=Colors.RED)
 
        else:  # "str" and anything else falls back to free text
            box_row = self.row + len(self.schema) + 4
            new_val = input_box(self.scr, row=box_row, col=self.col,
                                  prompt=key, width=20)
            if new_val is not None:
                self.cfg[key] = new_val
                self.dirty = True
 
    # ---- main loop -------------------------------------------------
 
    def run(self):
        n = len(self.schema)
        while True:
            self._draw()
            key = self.scr.getkey()
 
            if key in (KEY_UP, "k"):
                self.sel = (self.sel - 1) % n
            elif key in (KEY_DOWN, "j"):
                self.sel = (self.sel + 1) % n
            elif key == KEY_ENTER:
                fkey, ftype, default, extra = self.schema[self.sel]
                self._edit_field(fkey, ftype, extra)
            elif key == "s":
                self.save()
                message_box(self.scr, "Saved to %s" % self.path,
                             fg=Colors.GREEN)
            elif key in ("q", KEY_ESC):
                if self.dirty:
                    choice = self._confirm_exit()
                    if choice == "save":
                        self.save()
                        return self.cfg
                    elif choice == "discard":
                        return self.cfg
                    # else: cancel, keep editing
                else:
                    return self.cfg
 
    def _confirm_exit(self):
        """Tiny inline prompt: y = save & quit, n = discard & quit,
        anything else = keep editing."""
        box_row = self.row + len(self.schema) + 4
        self.scr.addstr(box_row, self.col,
                          "Unsaved changes -- save? (y/n/ESC) ",
                          fg=Colors.YELLOW)
        self.scr.refresh()
        key = self.scr.getkey()
        if key in ("y", "Y"):
            return "save"
        elif key in ("n", "N"):
            return "discard"
        return "cancel"
 