# C++ Project Template

![C++](docs/badges/C++.svg)
[![CMake](docs/badges/Made-with-CMake.svg)](https://cmake.org)
[![Makefile](docs/badges/Made-with-Makefile.svg)](https://www.gnu.org/software/make/manual/make.html)
[![Docker](docs/badges/Made-with-Docker.svg)](https://www.docker.com)
![Linux](docs/badges/Linux.svg)

## Introduction

A C++ project template for *Linux* built with:

- [*Docker*](https://www.docker.com)
- [*CMake*](https://cmake.org)
- [*Makefile*](https://www.gnu.org/software/make/manual/make.html)
- [*GoogleTest*](https://google.github.io/googletest)
- [*GitHub Actions*](https://github.com/features/actions)

## Building with *CMake*

### Prerequisites

- Install *GoogleTest*.
- Install *CMake*.

### Building

Go to the project folder and run:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Running Tests

Go to the `build` folder and run:

```bash
ctest -VV
```

### Running the Main Program

Go to the `build/bin` folder and run:

```bash
./cpp-sample
```

## Building with *Docker*

### Prerequisites

- Install *Docker*.

### Building

Go to the project folder and run the following command to create an image:

```bash
docker image build . -t <image>
```

`<image>` should be replaced with a custom *Docker* image name.

### Running Tests

```bash
docker container run <image> ctest --test-dir .. -VV
```

### Running the Main Program

```bash
docker container run <image>
```

## Building with *Makefile*

Currently *Makefile* does not support *GoogleTest*.

### Building

Go to the project folder and run:

```bash
make
```

### Running the Main Program

Go to the `build` folder and run:

```bash
./cpp-sample
```

## Structure

```
.
├── .github
│   └── workflows
│       └── build-test.yaml
├── cmake
│   └── hello.cmake
├── docs
│   └── badges
│       ├── C++.svg
│       ├── Linux.svg
│       ├── Made-with-CMake.svg
│       ├── Made-with-Makefile.svg
│       └── Made-with-Docker.svg
├── include
│   └── foo
│       └── foo.h
├── src
│   ├── foo
│   │   ├── CMakeLists.txt
│   │   ├── foo.cpp
│   │   ├── private_foo_test.cpp
│   │   ├── private_foo.cpp
│   │   └── private_foo.h
│   ├── CMakeLists.txt
│   └── main.cpp
├── tests
│   ├── CMakeLists.txt
│   └── foo_test.cpp
├── .clang-format
├── .gitignore
├── cmake-build.ps1
├── CITATION.cff
├── CMakeLists.txt
├── Dockerfile
├── Makefile
└── README.md
```