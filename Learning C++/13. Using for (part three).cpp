// цикл for
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cmath> //обеспечивает работу функции sqrt
#include <conio.h> // обеспечивает работу функции _kbhit()
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");

	{
		cout << "1АЯ ПРОГРАММА" << endl; // математическая функция
		int num;
		double sq_root;
		for (num = 1; num < 100; num++) {
			sq_root = sqrt((double)num); //функция sqrt
			cout << num << " " << sq_root << '\n.' << endl;
		}
		system("pause");
	}

	{
		cout << "2АЯ ПРОГРАММА" << endl; // невыполняемые инструкции
		int i, x , y;
		cout << "Введите число от 1 до 3:" << endl;
		cin >> i;
		if (i < 1) cout << "Введено неправильное число." << endl;
		else if (i > 3) cout << "Введено неправильное число." << endl;
		else if (i == 1) {
			for (i = 100; i >= -100; i = i - 5) cout << i << ' ' << endl;
		}
		else if (i == 2) {
			for (i = 10; i < 5; i++) cout << i << ' ' << endl;
		}
		else (i == 3); {
			for (x = 0, y = 10; x <= 10; ++x, --y) cout << x << ' ' << y << '\n.' << endl;
		}
		system("pause");
	}

	{
		cout << "3Я ПРОГРАММА." << endl; // ¬ывод чисел на экран до нажати¤ любой клавиши.
		int i;
		// ¬ывод чисел на экран до нажати¤ любой клавиши.
		for (i = 0; _kbhit(); ++i) cout << i << ' ' << endl;
		system("pause");
	}

	{
		cout << "5АЯ ПРОГРАММА." << endl; //цикл без определени¤ элементов цикла.
		int x, limit;
		for (x = 0; x != 123;) {
			cout << "Введите число: " << endl;
			cin >> x;
		}
		system("pause");
	}

	{
		cout << "6АЯ ПРОГРАММА." << endl; //бесконечный цикл
		for (;;)
		{
			//...
		}
		system("pause");
	}

	{
		cout << "7АЯ ПРОГРАММА." << endl; //циклы временной задержки
		int x;
		for (x = 0; x < 100000000; x++) ;
		system("pause");
	}
	return 0;
}