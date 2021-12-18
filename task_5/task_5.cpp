/*
5. Ввести с клавиатуры символ. Определить, является ли
введённый символ цифрой либо знаком пунктуации.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите один символ: " << endl;
	char symbol;
	cin >> symbol;

	if (symbol >= '0' && symbol <= '9')
		cout << symbol << " является цифрой." << endl;
	else if (symbol == 63 || symbol == 33 || symbol == 58 || symbol == 44 || symbol == 46 || symbol == 59)
		cout << symbol << " является знаком пунктуации." << endl;

	return 0;
}