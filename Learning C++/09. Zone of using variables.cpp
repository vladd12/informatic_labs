//������������� ����������
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

void total(int x);

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	cout << "���������� ����� ����� �� 1 �� 5.\n" << endl;
	total(5);
	cout << "\n���������� ����� ����� �� 1 �� 6.\n" << endl;
	total(6);
	system("pause");
	return 0;
}

void total(int x)
{
	int sum = 0; //������������� ���������� sum
	int i, count;
	for (i = 1; i <= x; i++)
	{
		sum = sum + i;
		for (count = 0; count < 10; count++) cout << '.';
		cout << "������������� ����� ����� " << sum << '\n' << endl;
	}
}