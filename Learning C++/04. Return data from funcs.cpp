#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int mul (int x, int y); //�������� ������� mul ()

int main()
{
	int answer;
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	answer = mul(10, 11); //������������ ������������� �������� �������� ����� ������������� �������� answer
	cout << "����� ����� " << answer << endl;
	system("pause");
	return 0;
}

//��� ������� ���������� ��������
int mul (int x, int y)
{
	return x * y; //
}