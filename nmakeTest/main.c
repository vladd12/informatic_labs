#include <stdio.h>
#include "calculate.h"
#include <Windows.h>

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float Numeral;
	char Operation[4];
	float Result;
	printf("�����: ");
	scanf("%f", &Numeral);
	printf("�������������� �������� (+,-,*,/,pow,sqrt,sin,cos,tan): ");
	scanf("%s", &Operation);
	Result = Calculate(Numeral, Operation);
	printf("%6.2f\n", Result);
	// _getch(); // ��� ������� �� IDE
	return 0;
}