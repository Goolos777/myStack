
//реализовать очередь с приоритетным включением
#pragma once
template <class T>
class QueuePriority : public Store<T>
{
	
	
public:
	QueuePriority(){}
	~QueuePriority(){}







	void pushQueue(const T& orig, int prior = 1)//включение в очередь
	{
		BaseType *tmp = new BaseType(orig, prior);
		if (head == nullptr)
		{
			head = tail = tmp;
		}
		else
		{
			/*
			ќчередь с приоритетным включением Ч така€ очередь,
			в которой последовательность элементов все врем€ 
			поддерживаетс€ упор€доченной по убыванию приоритета. 
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
	
	T pullQueue()//выход из очереди
	{
		BaseType *tmp = head;
		pop()
		return data;
	}
	

	



};

