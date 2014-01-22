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

	//поставить первым 
	void push(const T &orig)
	{
		BaseType<T> *origNode = new BaseType<T>(orig);
		if (head) { origNode->next = head; }
		head = origNode;
	}

	//удалить первого
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

	//возвращает первый элемент
	T peek(){ return head->getData(); }

	//возвращает первый элемент и удаляет его из стека
	T top()
	{
		T tmp = peek();
		pop();
		return tmp;
	}

	//Добавить элемент можно, только если он меньше, чем предыдущий
	void push2(const T orig){ if (orig < peek())push(orig); }

};
