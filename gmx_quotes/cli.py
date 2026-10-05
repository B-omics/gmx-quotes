import argparse
import sys
from pathlib import Path

from gmx_quotes.quotes import get_random_mnemonic, get_random_quote


BORDER = "╔" + "═" * 46 + "╗"
TITLE  = "║" + "  G R O M A C S".center(46) + "║"
BOTTOM = "╚" + "═" * 46 + "╝"


def print_quote(collection: str = "english/new_testament") -> None:
    mnemonic = get_random_mnemonic()
    text, ref = get_random_quote(collection)

    print()
    print(BORDER)
    print(TITLE)
    print(BOTTOM)
    print()
    print(mnemonic)
    print()
    print(f'"{text}"')
    print(f"  — {ref}")
    print()


def main() -> None:
    parser = argparse.ArgumentParser(
        prog="gmx-quotes",
        description="Display a Biblical quotation for your GROMACS workflow.",
    )
    parser.add_argument(
        "--collection",
        default="english/new_testament",
        help="Quote collection to use (default: english/new_testament)",
    )
    parser.add_argument(
        "--setup",
        choices=["light", "full"],
        metavar="MODE",
        help="Print shell integration snippet (light: appends quote, full: replaces GROMACS default quote)",
    )
    args = parser.parse_args()

    if args.setup:
        print(_shell_integration(args.setup))
        return

    print_quote(args.collection)


def _shell_integration(mode: str = "light") -> str:
    if mode == "full":
        return """\
# gmx-quotes shell integration (full mode)
# Strips the default GROMACS quote and replaces it with your own.
# Add to ~/.bashrc or ~/.zshrc, then reload your shell.

gmx() {
    case "$1" in
        pdb2gmx|make_ndx|genion|genrestr|select|editconf)
            command gmx "$@"
            local exit_code=$?
            ;;
        *)
            command gmx "$@" 2>&1 | sed '/GROMACS reminds you/d'
            local exit_code=${PIPESTATUS[0]}
            ;;
    esac
    gmx-quotes
    return $exit_code
}
"""
    return """\
# gmx-quotes shell integration (light mode)
# Appends your quote after the normal GROMACS output.
# Add to ~/.bashrc or ~/.zshrc, then reload your shell.

gmx() {
    command gmx "$@"
    local exit_code=$?
    gmx-quotes
    return $exit_code
}
"""


if __name__ == "__main__":
    main()
