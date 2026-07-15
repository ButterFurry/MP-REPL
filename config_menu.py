from mpy_tui import wrapper
from cfm import ConfigMenu

SCHEMA = [
    ("repl_password", "str", "passwrd1", None),
    ("retry_count", "int", 90, (1, 500))
]

def main(scr):
    cm = ConfigMenu(scr, "config.py", SCHEMA, title="Settings")
    cm.run()

wrapper(main)