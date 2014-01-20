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
TEST(Brackets, wordTwoBracketsOne)
{
	Brackets br;
	EXPECT_FALSE(br.checkBrackets("h(e[]llo word"));
}
TEST(Brackets, wordTwoBracketsTwo)
{
	Brackets br;
	EXPECT_TRUE(br.checkBrackets("h(e)[]llo word"));
}
TEST(Brackets, wordTwoBracketsThree)
{
	Brackets br;
	EXPECT_FALSE(br.checkBrackets("h(el[)lo word"));
}
TEST(Brackets, wordTwoBracketsFULL)
{
	Brackets br;
	EXPECT_TRUE(br.checkBrackets("h(e(<>)l)lo wo<{}>rd"));
}