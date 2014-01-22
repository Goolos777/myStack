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
		BaseType(T data, int prior = 1) :data(data), priority(prior), before(nullptr), back(nullptr);
		T getData(){ return data; }
		int getPriority(){ return priority; }
		BaseType *before;		   		//�����
	};
public:
	Store();
	void push(const T &orig) = 0;//���������� �������
	void pop()=0;//������� �������
	T peek()=0;//���������� ������� �������
	T top()=0;//���������� �������  ������� � ������� ��� �� ���������
	bool contains(const T& orig)=0;//���������, ���������� �� ��������� ������� � �����
	
	void push2(const T orig);//�������� ������� �����, ������ ���� �� ������, ��� ����������
	void push3();//�������� ������� �����, ������ ���� ������ �������� ��� ��� � �����
	bool isEmpty(const T orig)//�������� ������� �����
	{

	}
	virtual ~Store();
};

