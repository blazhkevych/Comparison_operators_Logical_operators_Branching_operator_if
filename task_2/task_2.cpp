/*
2. Реализовать калькулятор. Вводятся 2 дробных числа a и b.
Необходимо вывести на экран меню с пунктами: 1) a + b
2) a – b 3) a * b 4) a / b. При выборе соответствующего
пункта меню происходит вывод результата вычисления.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите 2 дробных числа." << endl;
	cout << "Введите дробное число \"a\": " << endl;
	double a{ 0.0 };
	cin >> a;

	cout << "Введите дробное число \"b\": " << endl;
	double b{ 0.0 };
	cin >> b;

	cout << "Выберите действие с числами: "
		<< "\n1) a + b"
		<< "\n2) a – b"
		<< "\n3) a * b"
		<< "\n4) a / b"
		<< endl;

	int trigger{ 0 };
	cin >> trigger;

	if (trigger == 1)
	{
		cout << "Вы выбрали : 1) a + b" << endl;
		cout << "a + b = " << a + b << endl;
	}
	else if (trigger == 2)
	{
		cout << "Вы выбрали : 2) a – b" << endl;
		cout << "a - b = " << a - b << endl;
	}
	else if (trigger == 3)
	{
		cout << "Вы выбрали : 3) a * b" << endl;
		cout << "a * b = " << a * b << endl;
	}
	else if (trigger == 4)
	{
		cout << "Вы выбрали : 4) a / b" << endl;
		cout << "a / b = " << a / b << endl;
	}
	else
		cout << "Пунктов меню всего 4!" << endl;

	return	0;
}