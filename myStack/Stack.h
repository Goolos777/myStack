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
	~Stack(){ while (!head){pop();}	}
	//��������� ������
	void push(T &orig)
	{
		Node *origNode = new Node(nullptr, orig);
		if (head) {	origNode->next = head;	}
		head = &origNode;
	}
	//������� �������
	void pop()
	{
		Node *origNode = head;
		head = origNode->next;
		delete head;
	}
	//���������� ������ �������
	T top(){ return &head;	}
	
	
};

