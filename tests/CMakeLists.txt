cmake_minimum_required(VERSION 3.0)

# Add googletest includes to make them accessible from our test sources.
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add tests for ExampleClass under the name ExampleClass_Tests.
add_executable(ExampleClass_Tests ExampleClass_Tests.cpp ${PROJECT_SOURCE_DIR}/ExampleClass.h ${PROJECT_SOURCE_DIR}/ExampleClass.cpp)
target_link_libraries(ExampleClass_Tests gtest gtest_main)
add_test(Exampleclass ExampleClass_Tests)

# Adding more tests is as simple as following the example above.