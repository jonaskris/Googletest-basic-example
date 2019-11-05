#include <gtest/gtest.h>

#include "../ExampleClass.h"

TEST(ExampleClass, Initialization)
{
    ExampleClass tc1(0, 1.0, 2.0f);
    EXPECT_EQ(0, tc1.i);
    EXPECT_EQ(1.0, tc1.d);
    EXPECT_EQ(2.0f, tc1.f);
}

TEST(ExampleClass, PlusOperator)
{
    ExampleClass tc1(0, 1.0, 2.0f);
    ExampleClass tc2(3, 4.0, 5.3f);

    ExampleClass tc3 = tc1 + tc2;

    EXPECT_EQ(3, tc3.i);
    EXPECT_EQ(5.0, tc3.d);
    EXPECT_EQ(7.3f, tc3.f);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}