//2а. есть некое ариф.выражение в составе которого 1 вида скобок - ()
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

