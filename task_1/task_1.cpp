/*
1. Определить знак («+» или «-») введённого числа.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите число: " << endl;
	int number = { 0 };
	cin >> number;
	if (number < 0)
		cout << "Вы ввели отрицательное число." << endl;
	else
		cout << "Вы ввели положительное число." << endl;

	return	0;
}