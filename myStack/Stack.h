//1. реализовать безразмерный стэк


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
	//поставить первым
	void push(const T &orig)
	{
		Node *origNode = new Node(orig);
		if (head) { origNode->next = head; }
		head = origNode;
	}
	//удалить первого
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
	//возвращает первый элемент
	T peek(){ return head->elemet; }
	//возвращает первый элемент и удаляет его из стека
	T top()
	{ 
		T tmp = Peek();
		pop();
	}
	//проверяет, содержится ли некоторый элемент в стеке
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
	//Добавить элемент можно, только если он меньше, чем предыдущий
	void push2(const T orig)
	{
		if (orig < peek())push(orig);
	}
	//Добавить элемент можно, только если такого элемента ещё нет в стеке.
	void push3(const T orig)
	{
		if (!contains(orig))
		{
			push(orig);
		}
	}

};

