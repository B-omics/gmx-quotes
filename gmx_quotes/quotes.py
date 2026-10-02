import random
from pathlib import Path

_QUOTES_DIR = Path(__file__).parent.parent / "quotes"


def _load_lines(collection: str) -> list[str]:
    path = Path(collection) if Path(collection).is_absolute() else _QUOTES_DIR / f"{collection}.txt"
    text = path.read_text(encoding="utf-8")
    return [line.strip() for line in text.splitlines() if line.strip() and not line.startswith("#")]


def get_random_quote(collection: str = "english/new_testament") -> tuple[str, str]:
    lines = _load_lines(collection)
    entries = [line.split("|") for line in lines if "|" in line]
    text, ref = random.choice(entries)
    return text.strip(), ref.strip()


def get_random_mnemonic() -> str:
    path = _QUOTES_DIR / "mnemonics.txt"
    lines = [line.strip() for line in path.read_text(encoding="utf-8").splitlines()
             if line.strip() and not line.startswith("#")]
    return random.choice(lines)
