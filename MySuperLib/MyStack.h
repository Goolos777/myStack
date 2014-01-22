#pragma once
#include <iostream>
#include <string>
#include "Store.h"
using namespace std;
template <class T>
class Stack : public Store<T>
{
public:
	Stack(){}

	~Stack()
	{
		while (head)
		{
			pop();
		}
	}

	//��������� ������ 
	void push(const T &orig)
	{
		BaseType<T> *origNode = new BaseType<T>(orig);
		if (head) { origNode->next = head; }
		head = origNode;
	}

	//������� �������
	void pop()
	{
		if (head)
		{
			BaseType<T> *origNode = head;
			head = origNode->next;
			delete origNode;
		}
		else
		{
			cout << "empty stack\n";
		}
	}

	//���������� ������ �������
	T peek(){ return head->getData(); }

	//���������� ������ ������� � ������� ��� �� �����
	T top()
	{
		T tmp = peek();
		pop();
		return tmp;
	}

	//�������� ������� �����, ������ ���� �� ������, ��� ����������
	void push2(const T orig){ if (orig < peek())push(orig); }

};
