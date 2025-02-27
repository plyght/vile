# vile

Vile is a text editor that is extremely powerful and highly configurable. It is a clone of the popular vi editor, with many additional features and enhancements. Vile stands for "VI Like Emacs" and it aims to combine the best features of both vi and Emacs editors.

## Features

- **Multiple windows and buffers**: Vile allows you to work with multiple files simultaneously by opening them in different windows and buffers.
- **Syntax highlighting**: Vile supports syntax highlighting for various programming languages, making it easier to read and write code.
- **Extensible with macros**: You can extend Vile's functionality by writing macros in its built-in scripting language.
- **Customizable key bindings**: Vile allows you to customize key bindings to suit your workflow and preferences.
- **Powerful search and replace**: Vile provides advanced search and replace capabilities, including regular expressions.
- **Undo and redo**: Vile supports multiple levels of undo and redo, allowing you to easily revert changes.
- **Integration with external tools**: Vile can be integrated with external tools and programs, such as compilers and version control systems.
- **Cross-platform**: Vile is available on various platforms, including Unix, Linux, macOS, and Windows.

## Installation

### Unix/Linux

1. Download the latest version of Vile from the [official website](https://invisible-island.net/vile/).
2. Extract the downloaded tarball:
   ```sh
   tar -xzf vile-<version>.tar.gz
   ```
3. Change to the extracted directory:
   ```sh
   cd vile-<version>
   ```
4. Configure the build:
   ```sh
   ./configure
   ```
5. Compile and install Vile:
   ```sh
   make
   sudo make install
   ```

### macOS

You can install Vile using Homebrew:
```sh
brew install vile
```

### Windows

1. Download the latest version of Vile for Windows from the [official website](https://invisible-island.net/vile/).
2. Extract the downloaded zip file.
3. Run the installer and follow the on-screen instructions.

## Usage

To start Vile, simply run the `vile` command followed by the name of the file you want to edit:
```sh
vile filename
```

### Basic Commands

- `i`: Enter insert mode to start editing the text.
- `Esc`: Exit insert mode and return to command mode.
- `:w`: Save the current file.
- `:q`: Quit Vile.
- `:wq`: Save the current file and quit Vile.
- `:e filename`: Open a new file in Vile.
- `:help`: Display the help documentation.

### Customization

Vile can be customized by creating a configuration file named `.vilerc` in your home directory. You can add custom key bindings, macros, and other settings to this file. For example, to set the tab width to 4 spaces, add the following line to your `.vilerc` file:
```sh
set tabstop=4
```

For more information on customizing Vile, refer to the [official documentation](https://invisible-island.net/vile/).

## Contributing

If you would like to contribute to the development of Vile, you can find the source code on [GitHub](https://github.com/plyght/vile). Feel free to submit bug reports, feature requests, and pull requests.

## License

Vile is released under the [GPL-2.0 License](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html).
