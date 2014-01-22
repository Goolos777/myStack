#pragma once
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

	virtual void push(const T &orig) = 0;//установить элемент
	virtual void pop()=0;//удалить элемент
	virtual T peek()=0;//возвращает текущий элемент
	virtual T top()=0;//возвращает текущей  элемент и удаляет его из хранилища

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

