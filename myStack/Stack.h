//1. ����������� ������������ ����


#pragma once
#include <string>
using namespace std;
template <class T>
class Stack
{
	struct Node
	{
		Node *next;
		T elemet;
	};
	Node *head;
public:
	Stack() :head(nullptr){}
	~Stack()
	{
	//	Node tmp = head;
		while (head)
		{
			//���������� � ������� �������
		}
	}
	// ���������� � ����
	void push(T val)
	{
		
	}
	//������� �� �����
	T pop()
	{
		
		return *head;

	}
	
};

