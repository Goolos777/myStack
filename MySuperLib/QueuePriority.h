
//����������� ������� � ������������ ����������
#pragma once
template <class T>
class QueuePriority
{
	template <class T>
	class BaseType
	{
		T data;                           // ������
		int priority;
	public:
		BaseType(T data, int prior=1):data(data), priority(prior),before(nullptr),back(nullptr);
		T getData(){ return data; }
		int getPriority(){ return priority; }
		BaseType *before;		   		//�����
		BaseType *back;					 //�����
	};
	BaseType *head;
	BaseType *tail;
	
public:
	QueuePriority() :head(nullptr), tail(nullptr){}
	~QueuePriority();
	void pushQueue(const T& orig, int prior = 1)//��������� � �������
	{
		BaseType *tmp = new BaseType(orig, prior);
		if (head == nullptr)
		{
			head = tail = tmp;
		}
		else
		{
			/*
			������� � ������������ ���������� � ����� �������,
			� ������� ������������������ ��������� ��� ����� 
			�������������� ������������� �� �������� ����������. 
			*/



		}

	}
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
			cout << "empty stack\n";
		}
	}
	T pullQueue()//����� �� �������
	{
		BaseType *tmp = head;
		pop()
		return data;
	}
	

	



};

