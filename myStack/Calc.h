//2�. ���� ����� ����.��������� � ������� �������� 1 ���� ������ - ()
#pragma once
#include <string>
#include "Stack.h"
using namespace std;
class Calc
{
	Stack<char> matryoshka;
public:
	Calc();
	~Calc();
	int result(string str); 
};

