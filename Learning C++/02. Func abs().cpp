//����� ��������� �������
#include <iostream>
#include <Windows.h>
#include <cstdlib> //������������ ��� ������ ������������ ������� abs
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	cout << abs(-10) << endl; //�������� ������� abs ����� -10
	system("pause");
	return 0;
}