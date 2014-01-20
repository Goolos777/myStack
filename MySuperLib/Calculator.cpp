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

			if (tmp == tolerance.getChars(j))
			{
				flag = true;
				break;
			}
		}
		if (!flag)return false;
	}
	char one = str.getChars(str.getLength());
	char two = tolerance.getChars(tolerance.getLength();
	if (str.getChars(str.getLength())==tolerance.getChars(tolerance.getLength()))return false;
	return true;
}

int Calculator::expression(const String& str)
{
	if (chackTolerance(str))return 0;
	else - 1;
}