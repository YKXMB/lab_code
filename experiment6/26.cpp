#include"Date6.h"
int main()
{
	Date YourBirthday(1990, 10, 17);
	Date MyBirthday(1990, 10, 17);
	if (Equal(YourBirthday, MyBirthday))
		cout << "Birthday is the same!\n";
	else
		cout << "Birthday is not the same!\n";
	return 0;
}