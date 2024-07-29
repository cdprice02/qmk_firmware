## Features:
- Symmetric modifiers on home row (CMD/Super, Alt/Opt, Ctrl, Shift)
- Modes for Qwerty and Colemak support
- OLED on master half shows selected mode and lock states
- Encoders control volume up/down/mute

## Build:
To compile to Raspi 2040 (as intended for this keymap) perform the following command:
```
qmk compile -c -e CONVERT_TO=elite_pi -kb sofle/rev1 -km cprocker
```
