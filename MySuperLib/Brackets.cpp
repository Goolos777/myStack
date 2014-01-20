#include "Brackets.h"


bool Brackets::checkBrackets(String str)
{
	for (size_t i = 0; i < str.getLength(); i++)
	{
		int tmp = findBrackets(str.getChars(i), brackets);
		if (tmp < 4) stack.push(tmp);
		else if (tmp <= 8)
		{
			if (stack.peek() == tmp % 4) stack.pop();
			else return false;
		}
	}
	bool result = stack.isEmpty();
	return result;
};
int Brackets::findBrackets(const char& value, const String& str)
{
	for (size_t i = 0; i < str.getLength(); i++)
	{
		if (value == str.getChars(i))return i;
	}
	return 10;
}