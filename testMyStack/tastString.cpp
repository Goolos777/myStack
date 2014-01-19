#pragma once
#include "gtest\gtest.h"
#include "MyString.h"
TEST(String, TEST)
{
	String str("0123456789");
	int length = 9;
	for (int i = 0; i <= length; i++)
	{
		char tempChar = str.getChars(i);
		int a = atoi(&tempChar);
		EXPECT_EQ(a, i);
	}

}
