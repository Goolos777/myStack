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

int Calculator::expression(const String& str)
{
	if (!chackTolerance(str))return 0;
	else 1;
}