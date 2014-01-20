#pragma once
#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class String
{
	char *chars;
	int length;
	int capaciti;
	void reversOne(char &charsOne, int number);
	bool evrika(char* news, int poz, int length);
	void insertChar(char* news, int poz, int length);
public:
	void setCapacity(int);
	String();//80 символов минимально
	String(int);//задаеться capasiti > 0
	String(const char* chars);
	String(const String & orig){ setString(orig.getChars()); }
	void setString(const char *chars);
	void setString(const String &orig){ setString(orig.getChars()); }
	void setChar(char* one, int number){ if (number < length)chars[number - 1] = *one; };
	const char* getChars()const{ return chars; }
	char getChars(int number)const{ return chars[number]; }
	const int getLength()const{ return length; }
	const int getCapaciti()const{ return capaciti; }
	void print()const{ cout << chars; }//печатает строку
	void add(const char*, int poz = -1);//добавить к строке
	void add(const char chars);
	void add(const  String&str){ add(str.getChars()); }//добавить к строке
	void toLover(){ strupr(chars); }//все регистры вниз
	void toUpp(){ strlwr(chars); }//все регистры вверх
	bool IsNumber();
	int makeNumber(){ return IsNumber() ? atoi(chars) : -1; }//делает число со строки
	const char charAd(int number) const { return number + 1 > length || number < 0 ? '@' : chars[number]; }//передает символ позиции
	bool operator==(char *orig){ return !strcmp(chars, orig); }//сравнивает строки
	bool operator==(String& str){ return !strcmp(chars, str.getChars()); }//сравнивает строки
	int indexOf(char);//возращает первый попавшийся индекс в этой строке если нет вознат -1
	int lastIndexOf(char);//начинает поиск с конца
	int subSrting(char*, int index = 0);//индекс строки в строке
	void replase(char* old, char* news, int index = 0);//замена строк
	void revers(){ strrev(chars); };
	void Input();// ввод с клавиатуры с пробелами
	operator char*(){ return chars; };

	bool String::operator<(String str){ return strcmp(chars, str) < 0 ? true : false; }
	bool String::operator>(String str){ return strcmp(chars, str) > 0 ? true : false; }
	String & operator= (const String& orig);
	~String(){ delete[] chars; };

	int String::getInt(int number)const;
	
};
