//������������
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;
/*��� ��������� ������������� �������� ����� signed- � 
unsigned-���������� �������������� ����*/
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	short int i; //
	short unsigned int j; //
	j = 60000;
	i = j;
	cout << i << "  " << j << endl;
	system("pause");
	return 0;
}