//1. ����������� ������������ ����


#pragma once
#include <iostream>
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
	~Stack(){
		while (head)
		{
			pop();
		}	
	}
	//��������� ������
	void push(const T &orig)
	{
		Node *origNode = new Node(orig);
		if (head) { origNode->next = head; }
		head = origNode;
	}
	//������� �������
	void pop()
	{
		if (head)
		{
			Node *origNode = head;
			head = origNode->next;
			delete origNode;
		}
		else
		{
			cout << "empty stack";
		}
	}
	//���������� ������ �������
	T top(){ return head->elemet; }
};

