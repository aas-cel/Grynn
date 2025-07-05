# InfiniteCanvas

A modern, high-performance C++ infinite canvas note-taking application with rich features and a beautiful StyleCPP-based UI.

## Features
- Infinite canvas with smooth panning and zooming
- Rich text notes, drawing, and shape tools
- Sticky note-style containers with customizable colors
- File/project management with autosave and backup
- Export to PNG, PDF, Markdown, and TXT
- Undo/redo, search, and minimap
- Modular, memory-efficient architecture
- Modern, themeable UI using [StyleCPP](https://github.com/aas-cel/StyleCPP)

## Project Structure
```
InfiniteCanvas/
├── src/           # Application source code
├── resources/     # Styles, icons, fonts, templates
├── tests/         # Unit, integration, and performance tests
├── docs/          # Documentation
├── external/      # Third-party libraries (StyleCPP)
```

## Build Instructions

### Prerequisites
- C++20 compiler
- CMake >= 3.16
- StyleCPP (included in `external/` or as a submodule)

### Build
```sh
mkdir build && cd build
cmake ..
make -j$(nproc)
./InfiniteCanvas
```

## Usage
- Double-click or use the toolbar to create notes
- Pan with mouse drag, zoom with scroll wheel
- Use the toolbar for file, export, and search actions
- Access preferences and themes from the menu

## Contributing
Contributions are welcome! Please fork the repository and submit pull requests.
- Follow the code style and architecture
- Write tests for new features
- Document your code

## License
MIT
