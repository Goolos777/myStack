#pragma once
#include <iostream>
using namespace std;
template <class T>
class Store
{
protected:
	template <class T>
	class BaseType
	{
		T data;                           // Данные
		int priority;
	public:
		BaseType(T data, int prior = 1) :data(data), priority(prior), next(nullptr){};
		T getData(){ return data; }
		int getPriority(){ return priority; }
		BaseType<T> *next;		   		//перед
	};
	BaseType<T>* head;
public:
	Store() :head(nullptr){};

	virtual void push(const T &orig, int priority=1) = 0;//установить элемент
	
	//возвращает первый элемент и удаляет его из стека
	T top()
	{
		T tmp = peek();
		pop();
		return tmp;
	}

	//возвращает первый элемент
	T peek(){ return head->getData(); }

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
	//проверяет, содержится ли некоторый элемент в стеке
	bool contains(const T& orig)
	{
		BaseType<T> *tmp = head;
		while (tmp)
		{
			if (tmp->getData() == orig)return true;
			tmp = tmp->next;
		}
		return false;
	}

	//Добавить элемент можно, только если такого элемента ещё нет в стеке
	void push3(const T orig)
	{
		if (!contains(orig))
		{
			push(orig);
		}
	}

	//проверка пустого стека
	bool isEmpty(){	return !head;}

	virtual ~Store(){};
};

