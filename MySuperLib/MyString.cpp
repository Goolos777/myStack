#include "MyString.h"
#include <stdexcept>
using namespace std;


String::String()//80 �������� ����������
{
	capaciti = 80;
	chars = new char[2 * capaciti];
	strcpy(chars, "\0");
	length = 0;
}
String::String(int capaciti)//��������� capasiti > 0
{
	if (capaciti <= 0) capaciti = 1;
	this->capaciti = capaciti;
	chars = new char[2 * capaciti];
	strcpy(chars, "\0");
	length = 0;
}
String::String(const char* chars)
{
	capaciti = strlen(chars) + 1;
	this->chars = new char[2 * capaciti];
	strcpy(this->chars, chars);
	length = capaciti - 1;
}
void String::setString(const char *chars)
{
	if (this->chars != nullptr)
		delete[] this->chars;
	length = strlen(chars);
	capaciti = length + 1;
	this->chars = new char[2 * capaciti];
	strcpy(this->chars, chars);
}
void String::add(const char* chars, int poz)//�������� � ������
{
	if (poz = -1)poz = length;

	if (capaciti < length + strlen(chars) + 2)
	{
		capaciti = 2 * (capaciti + strlen(chars));
		char* tmp = new char[capaciti];
		tmp[0] = 0;
		strcat(tmp, this->chars);
		strcat(tmp, chars);
		delete[] this->chars;
		this->chars = tmp;
	}
	else
	{
		strcat(this->chars, chars);
		length += strlen(chars);
	}

}
//��������� ������ � ������
void String::add(const char& ch)
{
	chars[length++] = ch;
	chars[length] = 0;

}



//void String::add(const char chars)//�������� � ������
//{
//	if (capaciti<length + 2)
//	{
//		capaciti = 2 * capaciti;
//		char* tmp = new char[capaciti];
//		tmp[0] = 0;
//		strcat(tmp, this->chars);
//		this->chars[length] = chars;
//		delete[] this->chars;
//		this->chars = tmp;
//	}
//	else
//	{
//		this->chars[++length] = chars;
//		this->chars[length + 1] = 0;
//	}
//}

bool String::IsNumber()//��������� �� ������ ������
{
	int tempD(0), tempCh(0);
	for (int i = 0; i < length; i++)
	{
		if (isdigit(chars[i]))tempD++;
		else tempCh++;
	}
	if (tempD == 0 && tempCh != 0)return true;
	return false;
}
int String::indexOf(char ch)//��������� ������ ���������� ������ � ���� ������ ���� ��� ������ -1
{
	for (int i = 0; i < length - 1; i++)
	{
		if (chars[i] == ch)return i;
	}
	return -1;

}
int String::lastIndexOf(char ch)//�������� ����� � �����
{
	for (int i = (length - 1); i >= 0; i--)
	{
		if (chars[i] == ch)return i;
	}
	return -1;
}
int String::subSrting(char* ch, int index)//������ ������ � ������
{
	int length = strlen(ch);
	for (int i = index; i < this->length; i++)
	{
		if (chars[i] == ch[0])
		{
			for (int j = 1; j < length; j++)
			{
				if (chars[j + i] != ch[j]) break;
			}
			return i;
		}
	}
	return -1;

}

bool String::evrika(char* old, int poz, int length)
{
	if (chars[poz + length] != old[length])return false;
	if (length == 0)return true;
	evrika(old, poz, --length);
	return true;
}
void String::insertChar(char* news, int poz, int length)
{
	this->length = this->length + length;
	for (int i = this->length; i > length + poz; i--)
	{
		chars[i + 1] = chars[i];
	}
	for (int i = 0; i < length; i++)
	{
		chars[i + poz] = news[i];
	}

}
void String::replase(char* old, char* news, int index)//������ �����
{
	int lengthNew = strlen(news);
	int tempLength(pow(this->length / strlen(old), lengthNew));
	String temp(tempLength);
	for (int j(0), i(0); j < length; i++, j++)
	{
		if (evrika(old, i, strlen(old) - 1))
		{
			temp.insertChar(news, i, lengthNew);
			i += lengthNew;
		}
		temp[i] = chars[j];
	}
	*this = temp;
}
String & String::operator= (const String& orig)
{
	if (this == &orig)return *this;
	capaciti = orig.getCapaciti();
	length = orig.getLength();
	// �������� ���������� �� ������
	delete[] chars;
	chars = new char[capaciti];
	strcpy(chars, orig.getChars());
}

int String::getInt(int number)const
{
	char tempChar = chars[number];
	return  atoi(&tempChar);
}