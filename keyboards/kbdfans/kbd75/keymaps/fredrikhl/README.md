# Keyboard layout for KBD75

This is my personal layout for KBD75.

## Layout with xkb

```bash
setxkbmap -layout us -option level3:ralt_switch -option compose:menu
```

- The *level3* option maps right alt to act as `ISO_Layer3` (AltGr). This is
  useful e.g. with the us-intl layout, or to map custom symbols with *xmodmap*
- The *compose* option maps the menu key as a compose key.


## QMK keymap

- The ISO layout lt/gt key is *KC_MENU*, which is mapped as *compose* key in xkb
- The right shift is also *KC_MENU*


## Layer 1

- Esc: DFU


## Images

![Layout of keys on my KBD75 build][img-layout]
![Picture of keyboard][img-keyboard]


[img-layout]: img/layout.png
[img-keyboard]: img/keyboard.png
