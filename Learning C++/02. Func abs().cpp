//Юзаем аргументы функций
#include <iostream>
#include <Windows.h>
#include <cstdlib> //используется для вызова библиотечной функции abs
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	cout << abs(-10) << endl; //передача функции abs числа -10
	system("pause");
	return 0;
}