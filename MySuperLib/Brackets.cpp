#include "Brackets.h"


bool Brackets::checkBrackets(String str)
{
	for (size_t i = 0; i < str.getLength(); i++)
	{
		if (str.getChars(i) == '(') stack.push(1);
		else if ((str.getChars(i) == ')')) stack.pop();
	}
	return stack.isEmpty();
};