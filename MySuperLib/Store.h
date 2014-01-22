#pragma once
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

	virtual void push(const T &orig) = 0;//���������� �������
	virtual void pop()=0;//������� �������
	virtual T peek()=0;//���������� ������� �������
	virtual T top()=0;//���������� �������  ������� � ������� ��� �� ���������

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

