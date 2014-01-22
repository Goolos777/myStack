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
		BaseType(T data, int prior = 1) :data(data), priority(prior), before(nullptr), back(nullptr);
		T getData(){ return data; }
		int getPriority(){ return priority; }
		BaseType *before;		   		//перед
	};
public:
	Store();
	void push(const T &orig) = 0;//установить элемент
	void pop()=0;//удалить элемент
	T peek()=0;//возвращает текущий элемент
	T top()=0;//возвращает текущей  элемент и удаляет его из хранилища
	bool contains(const T& orig)=0;//проверяет, содержится ли некоторый элемент в стеке
	
	void push2(const T orig);//Добавить элемент можно, только если он меньше, чем предыдущий
	void push3();//Добавить элемент можно, только если такого элемента ещё нет в стеке
	bool isEmpty(const T orig)//проверка пустого стека
	{

	}
	virtual ~Store();
};

