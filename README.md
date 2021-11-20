# st - simple terminal

st is a simple terminal emulator for X which sucks less.

This repository is just a fork of [st](https://git.suckless.org/st) from tag `0.8.2`,
with some cool patches applied on top :smile:.

<img src="./.github/screenshot.png" alt="screenshot" />

## Included Patches

- [scrollback](https://st.suckless.org/patches/scrollback/)
- [scrollback-mouse](https://st.suckless.org/patches/scrollback/)
- [scrollback-clamp](https://github.com/mohkale/st/commit/8bc34c845d7ed8e646aeaa39a1f9feb561b9072f)
- [anysize](https://st.suckless.org/patches/anysize/)
- [alpha-focus-highlight](https://st.suckless.org/patches/alpha_focus_highlight/)
- [alpha](https://st.suckless.org/patches/alpha/)
- [alpha-all](https://github.com/mohkale/st/commit/dc775e23baeb246367eb2be06fcac5b12b01b523)
- [fix-keyboard-input](https://st.suckless.org/patches/fix_keyboard_input/)
- [vertcenter](https://st.suckless.org/patches/vertcenter/)
- ~~[newterm](https://st.suckless.org/patches/newterm/)~~
- [clipboard](https://st.suckless.org/patches/clipboard/)
- [right-click-paste](https://st.suckless.org/patches/rightclickpaste/)
- [selection-colors](https://st.suckless.org/patches/selectioncolors/)
- [desktop-entry](https://st.suckless.org/patches/desktopentry/)
- [font2](https://st.suckless.org/patches/font2/)
- [bold-is-not-bright](https://st.suckless.org/patches/bold-is-not-bright/)
- [invert](https://st.suckless.org/patches/invert/)
- [external-pipe](https://st.suckless.org/patches/externalpipe/)
- [external-pipe-eternal](https://st.suckless.org/patches/externalpipe/)
- [boxdraw](https://st.suckless.org/patches/boxdraw/)
- [appsync](https://st.suckless.org/patches/sync/)
- [fix-wide-glyph-truncation](https://github.com/Dreomite/st/commit/e3b821dcb3511d60341dec35ee05a4a0abfef7f2)
- initial-zoom

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

## Theme

The theme shown above is a fork of [an-old-hope][aoh] tailored specifically for
use in st. You can find the color codes in [theme](./theme.h).

[aoh]: https://github.com/mohkale/an-old-hope-theme

## Fonts

The default font is:

- [Meslo LG M DZ](https://www.fontmirror.com/meslo-lg-dz)

And this build will automatically pick up and use the following fonts (in order):

- [Nerd Fonts](https://github.com/ryanoasis/nerd-fonts)
- [Devicons](https://devicon.dev/)
- [All The Icons](https://github.com/domtronn/all-the-icons.el/tree/6917b08f64dd8487e23769433d6cb9ba11f4152f/fonts) (batch)
- [Symbola](https://fontlibrary.org/en/font/symbola)
- [Unifont](https://unifoundry.com/unifont/)

## Credits

Based on Aurélien APTEL &lt;aurelien dot aptel at gmail dot com&gt; bt source code.
