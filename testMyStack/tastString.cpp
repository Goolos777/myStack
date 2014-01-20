#pragma once
#include "gtest\gtest.h"
#include "MyString.h"
TEST(String, TESTgetChars)
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
TEST(String, getLength)
{
	String str("0123456789");
	int length = 10;	
	EXPECT_EQ(length, str.getLength());
	str="фывапрол";
	length = 8;
	EXPECT_EQ(length, str.getLength());
}

TEST(String, getRevers)
{
	String str("0123456789=");
	str.revers();
	EXPECT_EQ(str, "=9876543210");
	
}