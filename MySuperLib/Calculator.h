#pragma once
#include "MyString.h";
class Calculator
{
	String tolerance;
	bool chackTolerance(const String& str);
public:
	Calculator() :tolerance("01234567890()+-*/="){}
	int expression(const String& str);
	~Calculator();
};

