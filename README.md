# st - simple terminal

st is a simple terminal emulator for X which sucks less.

This repository is just a fork of [st](https://git.suckless.org/st) from tag `0.8.2`,
with some cool patches applied on top :smile:.

## Included Patches
- [scrollback](https://st.suckless.org/patches/scrollback/)
- [scrollback-mouse](https://st.suckless.org/patches/scrollback/)
- scrollback-clamp
- ~~[anysize](https://st.suckless.org/patches/anysize/)~~
- [alpha-focus-highlight](https://st.suckless.org/patches/alpha_focus_highlight/)
- [alpha](https://st.suckless.org/patches/alpha/)
- [fix-keyboard-input](https://st.suckless.org/patches/fix_keyboard_input/)
- [vertcenter](https://st.suckless.org/patches/vertcenter/)
- ~~[newterm](https://st.suckless.org/patches/newterm/)~~
- [clipboard](https://st.suckless.org/patches/clipboard/)
- [right-click-paste](https://st.suckless.org/patches/rightclickpaste/)
- [selection-colors](https://st.suckless.org/patches/selectioncolors/)
- [desktop-entry](https://st.suckless.org/patches/desktopentry/)
- [font2](https://st.suckless.org/patches/font2/)
- [bold-is-not-bright](https://st.suckless.org/patches/bold-is-not-bright/)

## Requirements
In order to build st you need the Xlib header files.

## Installation
Edit `config.mk` to match your local setup (st is installed into
the `/usr/local` namespace by default).

Afterwards enter the following command to build and install st (if
necessary as root):

```sh
make clean install
```

## Running st
If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

```sh
tic -sx st.info
```

See the man page for additional details.

## Credits
Based on Aurélien APTEL &lt;aurelien dot aptel at gmail dot com&gt; bt source code.
