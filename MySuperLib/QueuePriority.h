
#include "Store.h"
//����������� ������� � ������������ ����������
#pragma once
template <class T>
class QueuePriority : public Store<T>
{
public:
	QueuePriority(){};
	~QueuePriority(){ while (head){ pop(); } };

	virtual void push(const T &orig, int prior=1)//���������� �������
	{
		BaseType<T> *tmp = new BaseType<T>(orig, prior);
		if (head == nullptr)
		{
			head = tmp;
		}
		else
		{
			/*
			������� � ������������ ���������� � ����� �������,
			� ������� ������������������ ��������� ��� �����
			�������������� ������������� �� �������� ����������.
			*/
			BaseType<T> *tmp2(head);
			while (tmp2)
			{
				if (tmp->getPriority() > tmp2->getPriority())
				{
					head = tmp;
					tmp->next = tmp2;
					break;
				}
				tmp2 = tmp2->next;
			}
			if (!tmp2)
			{
				tmp2->next = tmp;
			}

		}
	}
};

