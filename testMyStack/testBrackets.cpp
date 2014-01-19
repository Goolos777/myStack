#pragma once
#include "gtest\gtest.h"
#include "Brackets.h"
TEST(Brackets, word)
{
	Brackets br;
	EXPECT_TRUE(br.checkBrackets("hello word"));
}
TEST(Brackets, wordOne)
{
	Brackets br;
	EXPECT_TRUE(br.checkBrackets("h()ello word"));
}
TEST(Brackets, wordTwo)
{
	Brackets br;
	EXPECT_FALSE(br.checkBrackets("h(ello word"));
}

