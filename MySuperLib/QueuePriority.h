
#include "Store.h"
//реализовать очередь с приоритетным включением
#pragma once
template <class T>
class QueuePriority : public Store<T>
{
public:
	QueuePriority(){};
	~QueuePriority(){ while (head){ pop(); } };

	virtual void push(const T &orig, int prior=1)//установить элемент
	{
		BaseType<T> *tmp = new BaseType<T>(orig, prior);
		if (head == nullptr)
		{
			head = tmp;
		}
		else
		{
			/*
			ќчередь с приоритетным включением Ч така€ очередь,
			в которой последовательность элементов все врем€
			поддерживаетс€ упор€доченной по убыванию приоритета.
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

