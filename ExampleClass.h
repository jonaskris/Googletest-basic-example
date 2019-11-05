#pragma once

class ExampleClass
{
public:
    int i;
    double d;
    float f;

    ExampleClass(int i, double d, float f);

    ExampleClass operator+(const ExampleClass& other);
};