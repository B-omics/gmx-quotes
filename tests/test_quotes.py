import pytest
from gmx_quotes.quotes import get_random_mnemonic, get_random_quote


def test_quote_returns_tuple():
    text, ref = get_random_quote()
    assert isinstance(text, str) and len(text) > 0
    assert isinstance(ref, str) and len(ref) > 0


def test_mnemonic_spells_gromacs():
    for _ in range(20):
        mnemonic = get_random_mnemonic()
        initials = "".join(w[0].upper() for w in mnemonic.rstrip(".").split())
        assert initials == "GROMACS", f"Mnemonic does not spell GROMACS: {mnemonic!r}"


def test_quote_has_book_reference():
    for _ in range(20):
        _, ref = get_random_quote()
        assert any(c.isdigit() for c in ref), f"Reference missing chapter/verse: {ref!r}"
