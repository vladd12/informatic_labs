//тип char (обратный алфавит)
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	char letter;
	cout << "Программа вывода английского алфавита в обратном порядке\n" << endl;
	for (letter = 'Z'; letter >= 'A'; letter--)
		cout << letter << endl;
	system("pause");
	return 0;
}