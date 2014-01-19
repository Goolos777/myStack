//1. ����������� ������������ ����


#pragma once
#include <string>
using namespace std;
template <class T>
class Stack
{
	struct Node
	{
		Node(const T&orig) :elemet(orig), next(nullptr){};
		Node *next;
		T elemet;
	};
	Node *head;
public:
	Stack() :head(nullptr){}
	~Stack(){ while (!head){pop();}	}
	//��������� ������
	void push(const T &orig)
	{
		Node *origNode = new Node(orig);
		if (head) {	origNode->next = head;	}
		head = origNode;
	}
	//������� �������
	void pop()
	{
		Node *origNode = head;
		head = origNode->next;
		delete origNode;
	}
	//���������� ������ �������
	T top(){ return head->elemet; }
	
	
};

