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
		Node tmp = head;
		while (head)
		{
			//���������� � ������� �������
		}
	}
	// ���������� � ����
	void push(T val)
	{
		Note* tmp;
		tmp = new Node;
		tmp->elem = val;
		tmp->next = nullptr;
		if (head == nulptr)
		{
			head = tmp;
			return;
		}
		Note* tmp2 = head;
		while (true)
		{
			if (tmp2->next == nullptr)
			{
				tmp2->next = tmp;
				return;
			}
		}
	}
	//������� �� �����
	T top()
	{
		


	}
	void pop();
	void print();
};

