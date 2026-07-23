import json
import _thread

SETTINGS_FILE = "settings.json"

_lock = _thread.allocate_lock()
_cache = {}


def _load_from_disk():
    try:
        with open(SETTINGS_FILE) as f:
            return json.load(f)
    except OSError:
        with open(SETTINGS_FILE, "w") as f:
            f.write("\n")
            f.close()
        return {}


def init():
    """Call once at startup to populate the in-memory cache."""
    global _cache
    with _lock:
        _cache = _load_from_disk()


def get(key, default=None):
    with _lock:
        return _cache.get(key, default)


def set(key, value):
    with _lock:
        _cache[key] = value
        with open(SETTINGS_FILE, "w") as f:
            json.dump(_cache, f)


def all_items():
    with _lock:
        return dict(_cache)