#include "Calculator.h"




Calculator::~Calculator()
{
}

bool Calculator::chackTolerance(const String& str)
{
	bool flag(false);
	for (size_t i = 0; i < str.getLength(); i++)
	{
		char tmp = str.getChars(i);
		for (size_t j = 0; j < tolerance.getLength(); j++)
		{
			char tmp2 = tolerance.getChars(j);
			if (tmp == tolerance.getChars(j))
			{
				flag = true;
				break;
			}
		}
		if (!flag)return false;
		flag = false;
	}
	char tmp3 = str.getChars(str.getLength()-1);
	char tmp4 = tolerance.getChars(tolerance.getLength()-1);
	if (str.getChars(str.getLength()-1)==tolerance.getChars(tolerance.getLength()-1))return true;
	return false;
}
String Calculator::revers(int first, int last,const String& str)
{
	Stack <char> st;
	for (size_t i = first; i < last; i++)
	{
		st.push(str.getChars(i));
	}
	String newStr;
	for (size_t i = 0; i < last-first; i++)
	{
		newStr.add(st.top());
	}
}
int Calculator::expression(const String& str)
{
	if (!chackTolerance(str))return 0;
	String number = revers(0, str.getLength() - 2, str);
	int numeric(0);
	for (size_t i = 0; i < str.getLength(); i++)
	{
			numeric += str.getInt(i)*pow(10, i);
	}
}