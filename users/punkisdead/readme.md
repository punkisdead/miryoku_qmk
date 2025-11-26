# punkisdead Miryoku Layout

This is a custom Miryoku layout based on manna-harbour_miryoku with the following modifications:

## Features

- **QWERTY alphas**: Uses standard QWERTY layout for the alpha keys
- **VI navigation**: Uses VI-style navigation keys (h/j/k/l) in the navigation layer
- **Custom thumb keys**: Modified thumb key layout

## Thumb Key Layout

From left to right: **ESC, TAB, RET, SPC, BSPC, DEL**

This differs from the standard Miryoku layout which has:
- ESC, SPACE, TAB, ENTER, BSPC, DEL

The changes are:
- Position 2: SPACE → TAB
- Position 3: TAB → RET (ENTER)
- Position 4: ENTER → SPACE

## Usage

To use this layout with a keyboard, create a keymap that uses this user space:

1. Create a keymap directory (e.g., `keyboards/your_keyboard/keymaps/punkisdead/`)
2. In the keymap's `rules.mk`, add: `SRC += users/punkisdead/punkisdead.c`
3. Compile with: `qmk compile -kb your_keyboard -km punkisdead`

Or use the standard Miryoku keymap structure and modify it to reference the punkisdead user.
