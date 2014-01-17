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
	~Stack()
	{
	//	Node tmp = head;
		while (head)
		{
			//выт€гиваем и удал€ем элемент
		}
	}
	// установить в стек
	void push(T val)
	{
		
	}
	//достать из стека
	T pop()
	{
		
		return *head;

	}
	
};

