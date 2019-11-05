The project serves as a very basic example of testing using CMake and googletest. Googletest is included in the project as a git submodule. 

Contained in the project is an example class with separated header and implementation. There are no executables made other than the executable used for testing.

## Cloning
Cloning a repository with submodules is done by adding the argument --recurse-submodules.

    git clone --recurse-submodules https://github.com/jonaskris/Googletest-basic-example.git

## Building
    cd Googletest-basic-example
    mkdir build
    cd build
    cmake ..
    make

## Testing
The project must be built before running tests.

### To run all tests
    make test