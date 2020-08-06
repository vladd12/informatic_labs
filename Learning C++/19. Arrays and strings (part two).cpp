// Массивы и строки. 2ая часть.
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int menu();
void enter(), report();

char name[20][80]; //Массив имён служащих.
char phone[10][20]; //Массив телефонных номеров людей.
float hours[10]; //Массив часов, отработанных за неделю.
float wage[10]; //Массив окладов

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	
	{
		cout << "Преобразование символов строки в их прописные эквиваленты." << endl;
		char str[100];
		int i;
		strcpy_s(str, "test");
		for (i = 0; str[i]; i++) str[i] = toupper(str[i]); //ставит прописные символы.
		cout << str << endl; //функция tolower() возвращает строчные символы.
	}

	{
		cout << "Программа ведения базы данных служащих." << endl;
		{
			int choice;
			do {
				choice = menu(); //
				switch (choice) {
				case 0: break;
				case 1: enter();
					break;
				case 2: report();
					break;
				default: cout << "Попробуйте ещё раз." << endl;
				}
			} while (choice != 0);
		}
	}
	system("pause");
	return 0;
}

//Функция возвращет команду, выбранную пользователем.
int menu()
{
	int choice;
	cout << "0. Выход из программы." << endl;
	cout << "1. Ввод информации." << endl;
	cout << "2. Генерирование отчёта.\n" << endl;
	cout << "Выберите команду: " << endl;
	cin >> choice;
	return choice;
}

//Фуекция ввода информации в базу данных.
void enter()
{
	int i;
	char temp[80];
	for (i = 0; i < 10; i++) {
		cout << "Введите фамилию: ";
		cin >> name[i];
		cout << "Введите номер: ";
		cin >> phone[i];
		cout << "Введите количество отработанных часов за неделю: ";
		cin >> hours[i];
		cout << "Введите оклад: ";
		cin >> wage[i];
	}
}

//Отображение отчёта.
void report()
{
	int i;
	for (i = 0; i < 10; i++) {
		cout << name[i] << ' ' << phone[i] << endl;
		cout << "Зарплата за неделю: " << wage[i] * hours[i] << endl;
	}
}