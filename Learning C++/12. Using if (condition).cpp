//инструкция if
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	int magic, var, a, b, x;
	
	{
		magic = rand(); //присваивается рандомное число
		cout << "1АЯ ПРОГРАММА." << endl; // игра в магическое число.
		cout << "Введите свой вариант магического числа:" << endl;
		cin >> var;
		if (var == magic) {
			cout << "Правильно!" << endl;
			cout << magic << " и есть магическое число." << endl;
		}
		else {
			cout << "Очень жаль, но вы ошиблись." << endl;
			cout << "Магическое число:" << magic << endl;
			if (var > magic) cout << "Ваш вариант первышает магическое число." << endl;
			else cout << "Ваш вариант меньше магического числа." << endl;
		}
		system("pause"); 
	}

	{
		cout << "2АЯ ПРОГРАММА." << endl; // использование хорошего кода
		cout << "Введите два числа в последовательности, как хотите их разделить:" << endl;
		cin >> a >> b;
		if (b) cout << (float)a / b << endl;
		else cout << "На нуль делить нельзя." << endl;
		system("pause"); 
	}
	
	{
		cout << "3Я ПРОГРАММА." << endl; //вывод нескольких инструкций.
		for (x = 0; x < 6; x++) {
			if (x == 1) cout << "Х равен единице." << endl;
			else if (x == 2) cout << "Х равен двум." << endl;
			else if (x == 3) cout << "Х равен трём." << endl;
			else if (x == 4) cout << "Х равен четырём." << endl;
			else cout << "Х не попадает в диапозон от 1 до 4." << endl;
			system("pause");
		}
	}
	return 0;
}