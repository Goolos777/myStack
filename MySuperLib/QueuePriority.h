
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
	};
	BaseType *head;
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
	void insertBaseType(BaseType base, BaseType newbase)
	{
		newbase->back = base;
		newbase->before = base->before;
		base->before = newbase;
	}
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
			BaseType *tmp2 = head;
			do
			{
				if (prion > tmp2->getPriority())
				{
					insertBaseType(tmp2, tmp1);
					break;
				}


			} while (true);


		}

	}
	
	T pullQueue()//����� �� �������
	{
		BaseType *tmp = head;
		pop()
		return data;
	}
	

	



};

