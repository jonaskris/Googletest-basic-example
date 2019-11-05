cmake_minimum_required(VERSION 3.0)

enable_testing()

project(Project)

# This is where the project executables/libraries would be made if there were any.
#
#

# Tests are added last, along with the googletest subdirectory.
add_subdirectory(${PROJECT_SOURCE_DIR}/submodules/googletest)
add_subdirectory(tests)