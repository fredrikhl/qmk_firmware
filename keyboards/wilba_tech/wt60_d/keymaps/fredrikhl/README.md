# WT60-D

```
  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
  |  Grave  |    1    |    2    |    3    |    4    |    5    |    6    |    7    |    8    |    9    |    0    |    -    |    =    | Backspc |
  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
  |   Tab   |    Q    |    W    |    E    |    R    |    T    |    Y    |    U    |    I    |    O    |    P    |    [    |    ]    |         |
  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+  Enter  +
  |   Esc   |    A    |    S    |    D    |    F    |    G    |    H    |    J    |    K    |    L    |    ;    |    '    | \ (nuhs)|         |
  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
  |  LShift | \ (nubs)|    Z    |    X    |    C    |    V    |    B    |    N    |    M    |    ,    |    .    |    /    |         |  RShift |
  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
  |  LCtrl  |  LGUI   |  LALT   |                            Space                                    |  MENU   | LAYER1  | LAYER2  |  RCtcl  |
  +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
```


## Use

```
# build
make wilba_tech/wt60_d:fredrikhl
#
# flash
make wilba_tech/wt60_d:fredrikhl:dfu
```

## Layers

The base layer is a fairly sane and normal 60% ansi layout, but:

- No weird stuff on grave/tilde key, as is common on 60% layouts
- Escape on CAPS
- Menu where RALT normally is - Menu is used as compose key
- Layer1 mode where RGUI normally is
- Layer2 mode where Menu normally is
- Layer1 + Layer2 results in Layer3


### Layer 1

- F1-F12 on `1`-`0`, MINS, EQL
- Escape on GRV
- Caps lock back where it usually would be
- Arrows on WASD cluster
- Arrows on HJKL cluster
- mute on `m`, volume down on `,`, volume up on `.`

### Layer 2

- PGUP/PGDN/INS/DEL on WASD cluster
- HOME/END on Q/E


### Layer 3

- Reset on GRV
- EEP Reset on TAB
- most other keys are noop, except for modifiers and keys that aren't overridden
  in layer1
