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
	T peek(){ return head->elemet; }
	//���������� ������ ������� � ������� ��� �� �����
	T top()
	{ 
		T tmp = Peek();
		pop();
	}
	//���������, ���������� �� ��������� ������� � �����
	bool contains(const T& orig)
	{
		Node *tmp = head;
		while (tmp)
		{
			if (tmp->elemet == orig)return true;
			tmp = tmp->next;
		}
		return false;
	}
	//�������� ������� �����, ������ ���� �� ������, ��� ����������
	void push2(const T orig)
	{
		if (orig < peek())push(orig);
	}
	//�������� ������� �����, ������ ���� ������ �������� ��� ��� � �����.
	void push3(const T orig)
	{
		if (!contains(orig))
		{
			push(orig);
		}
	}

};

