# dmenu
> Suckless' dynamic menu ([dmenu](https://tools.suckless.org/dmenu/)), but with some patches and tweaks.

## Requirements
The Xlib header files are required in order to build *dmenu*.

## Installation
By default, *dmenu* will be installed into `/usr/local`, but another location can be set by
editing the `PREFIX` variable in the `config.mk` file.

Afterwards, running `sudo make clean install` should build and install *dmenu*.

## Patches and tweaks
The following is a list of the different patches and tweaks added to vanilla dmenu (see [patches](https://tools.suckless.org/dmenu/patches/)):
- Item matching is case-insensitive by default. Use the `-s` flag to enable case-sensitive matching.
- Use the `-h` to set a fixed height for dmenu. When combined with the `-l` flag each line will have the established height.
- Modified color scheme and default fonts. See [config.h](config.h).
- *dmenu* options are mouse clickable. See [this](https://tools.suckless.org/dmenu/patches/mouse-support/).

<!-- - Enter input in password mode by using the `-P` flag. This ignores any input from stdin. -->

## License
The MIT License. See [LICENSE](LICENSE) for more information.
