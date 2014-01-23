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
	void push(const T &orig, int priority = 1)
	{
		BaseType<T> *origNode = new BaseType<T>(orig);
		if (head) { origNode->next = head; }
		head = origNode;
	}

	





	//�������� ������� �����, ������ ���� �� ������, ��� ����������
	void push2(const T orig){ if (orig < peek())push(orig); }

};
