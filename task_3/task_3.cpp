/*
3. Ввести с клавиатуры число и проверить, принадлежит ли
это число диапазону от 1 до 30.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите число: " << endl;
	double number;
	cin >> number;

	if (number >= 1 && number <= 30)
		cout << "Число " << number << " пренадлежит диапазону от 1 до 30.";
	else
		cout << "Число " << number << " не пренадлежит диапазону от 1 до 30.";

	return	0;
}