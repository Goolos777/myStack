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
		T data;                           // ������
		int priority;
	public:
		BaseType(T data, int prior = 1) :data(data), priority(prior), next(nullptr){};
		T getData(){ return data; }
		int getPriority(){ return priority; }
		BaseType<T> *next;		   		//�����
	};
	BaseType<T>* head;
public:
	Store() :head(nullptr){};

	virtual void push(const T &orig, int priority=1) = 0;//���������� �������
	
	//���������� ������ ������� � ������� ��� �� �����
	T top()
	{
		T tmp = peek();
		pop();
		return tmp;
	}

	//���������� ������ �������
	T peek(){ return head->getData(); }

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
	//���������, ���������� �� ��������� ������� � �����
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

	//�������� ������� �����, ������ ���� ������ �������� ��� ��� � �����
	void push3(const T orig)
	{
		if (!contains(orig))
		{
			push(orig);
		}
	}

	//�������� ������� �����
	bool isEmpty(){	return !head;}

	virtual ~Store(){};
};

