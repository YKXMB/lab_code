//example4_04.cpp
#include<iostream>
using namespace std;
#include"4_04.h"

int main()
{
	Circle c1(3.5), c2;
	cout << "Radius of c1=" << c1.GetRadius() //<< ",circumference of c1=" << c1.Circumference() << endl;
	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;
	cout << "Radius of c1=" << c1.GetRadius()
	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c2.Circumference() << endl;

	system("pause");
	return 0;
}