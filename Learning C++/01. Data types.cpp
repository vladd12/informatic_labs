// Программа, преобразующая галлоны в литры через плавающую точку
#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	double gallons, liters; //Объявляется новый тип данных для дробных чисел (плавающая точка)
	cout << "Введите количество галлонов, требующих переведения в литры: " << endl;
	cin >> gallons;
	liters = gallons * 3.7854; //Точное уравнение перевода галлонов в литры
	cout << "В литрах данное количество галлонов равно: " << liters << endl;
	system("pause");
	return 0;
}