# Patching GROMACS coolstuff.cpp for your workstation

This replaces the default GROMACS quotes with New Testament (KJV) quotations
and God-themed GROMACS acrostics.

## Steps

1. Clone the GROMACS version you use:
   ```bash
   git clone https://gitlab.com/gromacs/gromacs.git
   cd gromacs
   git checkout v2024.3   # replace with your version
   ```

2. Open `src/gromacs/utility/coolstuff.cpp` in your editor.

3. Find the `bromacsArray[]` block and replace it entirely with the one in
   `coolstuff_replacement.cpp`.

4. Find the `quoteArray[]` block and replace it entirely with the one in
   `coolstuff_replacement.cpp`.

5. Build GROMACS normally:
   ```bash
   mkdir build && cd build
   cmake .. -DGMX_BUILD_OWN_FFTW=ON -DREGRESSIONTEST_DOWNLOAD=ON
   make -j$(nproc)
   sudo make install   # or install to a local prefix with -DCMAKE_INSTALL_PREFIX=~/gromacs
   ```

6. Keep a copy of this patch directory. When you upgrade GROMACS:
   - Apply the same replacements to the new version's `coolstuff.cpp`.
   - The array format rarely changes between versions, so this is usually a
     straight copy-paste.

## Notes

- Set `GMX_NO_QUOTES=1` in your environment to suppress all quotes (built-in
  GROMACS feature, unchanged by this patch).
- This modification is personal and is NOT affiliated with the GROMACS project.
- KJV text is public domain (1611).
