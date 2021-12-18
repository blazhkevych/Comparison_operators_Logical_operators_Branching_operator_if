/*
7. Вводится целое число (не более 4 разрядов). Определить
количество цифр в нём.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите целое число (не более 4 разрядов): " << endl;
	int number{ 0 };
	cin >> number;

	int trigger{ 0 };
	if (number < 10)
	{
		trigger++;
	}
	else if (number < 100)
	{
		trigger += 2;
	}
	else if (number < 1000)
	{
		trigger += 3;
	}
	else if (number < 10000)
	{
		trigger += 4;
	}
	cout << "Количество цифр в введенном числе " << trigger << endl;

	return 0;
}