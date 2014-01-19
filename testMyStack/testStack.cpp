
#include "gtest\gtest.h"
#include "MyStack.h"



TEST(tastStack, TEST_OnePush)
{
	Stack<int> stack;
	stack.push(4);
	EXPECT_EQ(stack.peek(), 4);
}
TEST(Stack, TEST_TwoPush)
{
	Stack<int> stack;
	stack.push(4);
	stack.push(3);
	EXPECT_EQ(stack.peek(), 3);
	stack.pop();
	EXPECT_EQ(stack.peek(), 4);
	stack.pop();
}
TEST(Stack, TESTfor)
{
	Stack<int> stack;
	int length(5);
	for (int i = 0; i <= length; i++)	{ stack.push(i); }
	for (int i = length; i >= 0; i--)
	{
		EXPECT_EQ(stack.peek(), i);
		stack.pop();
	}
}
TEST(Stack, TESTpop)
{
	Stack<int> stack;
	stack.push(2);
	stack.pop();
	stack.pop();
	stack.pop();
	stack.pop();
}

TEST(Stack, TESTcontains)
{
	Stack<int> stack;
	int length(10);
	for (int i = 0; i <= length; i++)	{ stack.push(i); }	
	EXPECT_TRUE(stack.contains(6));
	EXPECT_FALSE(stack.contains(100));
}

TEST(Stack, TESTpush2)
{
	Stack<int> stack;
	int length(10);
	for (int i = 0; i <= length; i++)	{ stack.push(i); }
	stack.push2(0);
	EXPECT_EQ(stack.peek(), 0);
	stack.push2(11);
	EXPECT_NE(stack.peek(), 11);
}
TEST(Stack, TESTpush3)
{
	Stack<int> stack;
	int length(10);
	for (int i = 0; i <= length; i++)	{ stack.push(i); }
	stack.push3(0);
	EXPECT_NE(stack.peek(), 0);
	stack.push3(11);
	EXPECT_EQ(stack.peek(), 11);
}

TEST(Stack, TESTisEmpty)
{
	Stack<int> stack;
	EXPECT_TRUE(stack.isEmpty());
	stack.push(1);
	EXPECT_FALSE(stack.isEmpty());
}
