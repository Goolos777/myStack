#pragma once
#include "MyString.h";
#include "MyStack.h";
class Calculator
{
	int strToInt(int first, int last, const String& str);
	String tolerance;
	bool chackTolerance(const String& str);
	String revers(int first, int last,const String& str);
	void chackInt(int &first, int &last, const String& str);
public:
	Calculator() :tolerance("01234567890()+-*/%="){}
	int expression(const String& str);
	~Calculator();
};

