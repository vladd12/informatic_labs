//�������� � ����������� ������� :D
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	wchar_t wc; 
	int hex = 0xFF; //255
	int oct = 011; //9
	char ch = 'Z';
	int first = 0;
	float balance = 123.23F; //������������� ����������
	wc = L'A';  //���������� ��������
	cout << "\n\\\b\b" << endl; //��������� ��������
	for (wc = 'A'; ch >= 'Z'; first++)
		cout << wc << "\n" << first << "\n" << ch << endl;
	system("pause");
	return 0;
}