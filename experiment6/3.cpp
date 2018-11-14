#include <iostream>
using namespace std;
/******************类******************/
class Date
{
	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &date);

	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();
};
/********************构造函数********************/
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}

Date::Date(const Date &date)
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}
/******************普通函数****************/
int Date::GetYear()
{
	return year;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetDay()
{
	return day;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
