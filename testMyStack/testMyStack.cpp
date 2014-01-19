#include "gtest\gtest.h"
#include "myStack\Stack.h""

TEST(Stack, TEST_OnePush)
{
	Stack<int> stack;
	stack.push(4);
	EXPECT_EQ(stack.top(), 4);
}
TEST(Stack, TEST_TwoPush)
{
	Stack<int> stack;
	stack.push(4);
	stack.push(3);
	EXPECT_EQ(stack.top(), 3);
	stack.pop();
	EXPECT_EQ(stack.top(), 4);
	stack.pop();
}
TEST(Stack, TESTfor)
{
	Stack<int> stack;
	int length(5);

	//stack.push(2);
	//stack.pop();

	/*
	for (int i = 0; i <= length; i++)	{stack.push(i);	}
	for (int i = length; i >= 0; i--)
	{
		EXPECT_EQ(stack.top(), i);
		stack.pop();
	}
	*/
}