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
	String();//80 �������� ����������
	String(int);//��������� capasiti > 0
	String(const char* chars);
	String(const String & orig){ setString(orig.getChars()); }
	void setString(const char *chars);
	void setString(const String &orig){ setString(orig.getChars()); }
	void setChar(char* one, int number){ if (number < length)chars[number - 1] = *one; };
	const char* getChars()const{ return chars; }
	char getChars(int number)const{ return chars[number]; }
	const int getLength()const{ return length; }
	const int getCapaciti()const{ return capaciti; }
	void print()const{ cout << chars; }//�������� ������
	void add(const char*, int poz = -1);//�������� � ������
	void add(const char chars);
	void add(const  String&str){ add(str.getChars()); }//�������� � ������
	void toLover(){ strupr(chars); }//��� �������� ����
	void toUpp(){ strlwr(chars); }//��� �������� �����
	bool IsNumber();
	int makeNumber(){ return IsNumber() ? atoi(chars) : -1; }//������ ����� �� ������
	const char charAd(int number) const { return number + 1 > length || number < 0 ? '@' : chars[number]; }//�������� ������ �������
	bool operator==(char *orig){ return !strcmp(chars, orig); }//���������� ������
	bool operator==(String& str){ return !strcmp(chars, str.getChars()); }//���������� ������
	int indexOf(char);//��������� ������ ���������� ������ � ���� ������ ���� ��� ������ -1
	int lastIndexOf(char);//�������� ����� � �����
	int subSrting(char*, int index = 0);//������ ������ � ������
	void replase(char* old, char* news, int index = 0);//������ �����
	void revers(){ strrev(chars); };
	void Input();// ���� � ���������� � ���������
	operator char*(){ return chars; };

	bool String::operator<(String str){ return strcmp(chars, str) < 0 ? true : false; }
	bool String::operator>(String str){ return strcmp(chars, str) > 0 ? true : false; }
	String & operator= (const String& orig);
	~String(){ delete[] chars; };

	int String::getInt(int number)const;
	
};
