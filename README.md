# gmx-quotes

A lightweight, customizable quotation tool for GROMACS workflows.

The default collection contains selected New Testament quotations (King James Version, public domain). Users can replace, extend, or create their own quotation collections in any language.

> **Note:** `gmx-quotes` is an independent community project. It is not affiliated with or endorsed by the GROMACS development team.

---

## Example output

```
╔══════════════════════════════════════════════╗
║                 G R O M A C S               ║
╚══════════════════════════════════════════════╝

God Remains Our Merciful Almighty Creator and Savior.

"I am the way, the truth, and the life: no man cometh unto the Father, but by me."
  — John 14:6
```

---

## Installation

The recommended way is [pipx](https://pipx.pypa.io/), which installs the tool globally and independently of any active conda/venv environment:

```bash
pipx install git+https://github.com/B-omics/gmx-quotes.git
```

If pipx is not installed yet:
```bash
pip install pipx
pipx ensurepath
```

**Alternative** — plain pip (installs into the currently active environment):
```bash
pip install git+https://github.com/B-omics/gmx-quotes.git
```

If you use pip, make sure `~/.local/bin` is in your PATH and use `pip install --user` only outside a virtual environment. Inside conda/venv, omit `--user` and use the absolute path returned by `which gmx-quotes` in the shell integration snippet (see below).

Requires Python ≥ 3.10.

---

## Usage

**Print a quote:**
```bash
gmx-quotes
```

**Shell integration** — quotes appear automatically after every `gmx` command.

There are two modes:

### Light mode
Appends your quote after the normal GROMACS output. The default GROMACS quote remains visible.

```bash
gmx-quotes --setup light >> ~/.bashrc
source ~/.bashrc
```

### Full mode
Strips the default GROMACS quote and replaces it with yours. Only your quote appears.

```bash
gmx-quotes --setup full >> ~/.bashrc
source ~/.bashrc
```

After either setup, you keep typing `gmx` commands as normal (`gmx mdrun`, `gmx grompp`, etc.) — the quote appears automatically.

---

## Quote collections

| Path | Description |
|------|-------------|
| `english/new_testament` | New Testament, KJV (default) |

### Adding your own quotes

Create a UTF-8 text file in the format:

```
# Comments start with #
Quote text here.|Book Chapter:Verse
Another quote.|Reference
```

Then run:
```bash
gmx-quotes --collection /path/to/my_quotes.txt
```

---

## GROMACS acrostic

Each output includes a sentence whose initial letters spell **G-R-O-M-A-C-S**. This is creative wordplay and is not the actual meaning or origin of the GROMACS name.

---

## Patching GROMACS directly (optional)

If you prefer your quotes to appear *inside* GROMACS output (replacing the default quotes at the source level), see [`coolstuff_patch/README_PATCH.md`](coolstuff_patch/README_PATCH.md). This requires building GROMACS from source.

---

## License

MIT — see [LICENSE](LICENSE).

Biblical text (KJV, 1611) is in the public domain.
