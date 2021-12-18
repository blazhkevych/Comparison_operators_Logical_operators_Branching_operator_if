/*
6. Определить модуль введённого числа.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите число: " << endl;
	int number{ 0 };
	cin >> number;

	if (number >= 0)
		cout << "Модуль числа " << number << " = " << number << endl;
	else if (number < 0)
	{
		int number_1 = 0;
		number_1 = number * -1;
		cout << "Модуль числа " << number << " = " << number_1 << endl;
	}

	return 0;
}