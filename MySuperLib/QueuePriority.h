
//����������� ������� � ������������ ����������
#pragma once
template <class T>
class QueuePriority : public Store<T>
{
	
	
public:
	QueuePriority(){}
	~QueuePriority(){}







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

