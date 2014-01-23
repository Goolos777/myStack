#include "gtest\gtest.h"
#include "QueuePriority.h"
#include <iostream>
using namespace std;

TEST(testQP, TEST_QP_Push)
{
	QueuePriority<int> qp;
	qp.push(4);
	EXPECT_EQ(qp.peek(), 4);
}
TEST(testQP, TEST_QP_Pop)
{
	QueuePriority<int> qp;
	qp.push(2);
	qp.pop();
	qp.pop();
	qp.pop();
	qp.pop();
}
TEST(testQP, TEST_top)
{
	QueuePriority<int> qp;
	qp.push(10,1);
	qp.push(20,2);
	qp.push(30,3);
	EXPECT_EQ(qp.top(), 30);
	EXPECT_EQ(qp.top(), 20);
	EXPECT_EQ(qp.top(), 10);
}

TEST(testQP, TEST_QP_Push_priorety_all)
{
	QueuePriority<int> qp;
	int length(5);
	for (int i = 0; i <= length; i++)
	{ 
		qp.push(i,i);
	}
	for (int i = length; i >= 0; i--)
	{
		EXPECT_EQ(qp.peek(), i);
		qp.pop();
	}
}