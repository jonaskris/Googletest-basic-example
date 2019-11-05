#include "ExampleClass.h"

ExampleClass::ExampleClass(int i, double d, float f) : i(i), d(d), f(f) {}

ExampleClass ExampleClass::operator+(const ExampleClass& other)
{
    return ExampleClass(i + other.i, d + other.d, f + other.f);
}