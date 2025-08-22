# Containers

## Overview

This project is an educational implementation of the main C++ Standard Template Library (STL) containers and underlying data structures.  
All containers and supporting data structures are written from scratch using modern C++ (C++20), following best practices for template-based container design.  
The repository is organized for easy navigation and testing in CLion and other CMake-based environments.

## Structure

```
containers/
├── sequence/
│   ├── array/
│   ├── vector/
│   ├── deque/
│   ├── list/
│   └── forward_list/
├── associative/
│   ├── set/
│   ├── multiset/
│   ├── map/
│   └── multimap/
├── unordered_associative/
│   ├── unordered_set/
│   ├── unordered_multiset/
│   ├── unordered_map/
│   └── unordered_multimap/
├── container_adapters/
│   ├── stack/
│   ├── queue/
│   └── priority_queue/
├── data_structures/
│   ├── red_black_tree/
│   └── hash_table/
├── tests/
│   ├── sequence/
│   │   ├── array/
│   │   ├── vector/
│   │   ├── deque/
│   │   ├── list/
│   │   └── forward_list/
│   ├── associative/
│   │   ├── set/
│   │   ├── multiset/
│   │   ├── map/
│   │   └── multimap/
│   ├── unordered_associative/
│   │   ├── unordered_set/
│   │   ├── unordered_multiset/
│   │   ├── unordered_map/
│   │   └── unordered_multimap/
│   ├── container_adapters/
│   │   ├── stack/
│   │   ├── queue/
│   │   └── priority_queue/
│   ├── data_structures/
│   │   ├── red_black_tree/
│   │   └── hash_table/
│   └── CMakeLists.txt
├── CMakeLists.txt
```

- **Sequence**: Linear containers (`array`, `vector`, `deque`, `list`, `forward_list`)
- **Associative**: Ordered containers (`set`, `multiset`, `map`, `multimap`) built atop custom **red-black tree** implementation
- **UnorderedAssociative**: Unordered hash-based containers (`unordered_set`, `unordered_multiset`, `unordered_map`, `unordered_multimap`) built atop custom **hash table** implementation
- **ContainerAdapters**: Adapter containers (`stack`, `queue`, `priority_queue`)
- **data_structures**: Core data structures used by containers (e.g., `red_black_tree`, `hash_table`)
- **tests**: Unit tests for each container and data structure

## Features

- Modern C++ (C++20)
- Template-based container classes designed in the style of STL
- Custom implementations of underlying data structures (red-black tree, hash table)
- Modular structure for easy extension and testing
- CMake-based build system (compatible with CLion)
- Unit tests for each container and data structure

## Getting Started

1. **Clone the repository**
   ```bash
   git clone https://github.com/0xV4h3/Containers.git
   ```

2. **Open in CLion (or any CMake-compatible IDE)**
    - Use CLion's "Open" dialog and select the root folder

3. **Build the project**
    - CMake will automatically configure and build all containers, data structures, and tests

4. **Run tests**
    - Use CLion's test runner, or run from terminal:
      ```bash
      ctest
      ```

## C++ Standard & Requirements

- Requires C++20 and CMake 3.31+
- Cross-platform: Linux, Windows, macOS

## License

MIT License