//1. реализовать безразмерный стэк


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
	//поставить первым
	void push(T &orig)
	{
		Node *origNode = new Node(nullptr, orig);
		if (head) {	origNode->next = head;	}
		head = &origNode;
	}
	//удалить первого
	void pop()
	{
		Node *origNode = head;
		head = origNode->next;
		delete head;
	}
	//возвращает первый элемент
	T top(){ return &head;	}
	
	
};

