// ���������, ������������� ������� � ����� ����� ��������� �����
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	double gallons, liters; //����������� ����� ��� ������ ��� ������� ����� (��������� �����)
	cout << "������� ���������� ��������, ��������� ����������� � �����: " << endl;
	cin >> gallons;
	liters = gallons * 3.7854; //������ ��������� �������� �������� � �����
	cout << "� ������ ������ ���������� �������� �����: " << liters << endl;
	system("pause");
	return 0;
}