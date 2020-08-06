// инструкции continue, goto и break, вложенные циклы
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	
	{
		cout << "Инструкци¤ continue" << endl;
		int x;
		for (x = 0; x < 100; x++) {
			if (x % 2) continue; //выбираем числа кратные 2
			cout << x << ' ' << endl;
		}
		system("pause");
	}
	
	{
		cout << "Инструкция break" << endl; //программа выводит 100 раз числа от 1 до 9
		int t, r;
		for (t = 0; t < 100; t++) {
			r = 1;
			for (;;) {
				cout << r << ' ' << endl;
				r++;
				if (r == 10) break;
			}
			cout << ' ' << endl;
		}
		system("pause");
	}
	
	{
		cout << "Вложенные циклы. ѕрограмма, определяющая простые числа." << endl;
		int i, j;
		for (i = 2; i < 1000; i++) {
			for (j = 2; j <= (i / j); j++)
			if (!(i%j)) break; //если число имеет положительный множитель, значит, оно не просто
			if (j >(i / j)) cout << i << " - простое число." << endl;
		}
		system("pause");
	}

	{
		cout << "Инструкци¤ goto" << endl;
		int x;
		x = 1;
	loopl: //юзаем метку loopl
		x++;
		cout << x << endl;
		if (x < 100) goto loopl;
		system("pause");
	}
	return 0;
}