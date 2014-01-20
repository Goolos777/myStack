#pragma once
#include "MyString.h";
#include "MyStack.h";
class Calculator
{
	String tolerance;
	bool chackTolerance(const String& str);
	String revers(int first, int last,const String& str);
public:
	Calculator() :tolerance("01234567890()+-*/="){}
	int expression(const String& str);
	~Calculator();
};

