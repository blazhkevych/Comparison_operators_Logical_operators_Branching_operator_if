/*
7. �������� ����� ����� (�� ����� 4 ��������). ����������
���������� ���� � ��.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //�������� ������ � ������� ������	

	cout << "������� ����� ����� (�� ����� 4 ��������): " << endl;
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
	cout << "���������� ���� � ��������� ����� " << trigger << endl;

	return 0;
}