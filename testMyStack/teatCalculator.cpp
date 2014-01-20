#pragma once
#include "gtest\gtest.h"
#include "Calculator.h"
TEST(Calculator, TESTfalse)
{
	Calculator calc;
	EXPECT_EQ(calc.expression("1o23456789="), 0);
	EXPECT_EQ(calc.expression("123456789"), 0);
}
TEST(Calculator, TESTnumber)
{
	Calculator calc;
	EXPECT_EQ(calc.expression("123456789="), 123456789);
}