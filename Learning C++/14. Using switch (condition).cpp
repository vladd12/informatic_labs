// инструкция switch
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	
	{
		cout << "1АЯ ПРОГРАММА." << endl;
		int choice;
		cout << "Справкам по темам:" << endl;
		cout << "1. for" << endl;
		cout << "2. if" << endl;
		cout << "3. switch" << endl;
		cout << "Введите номер темы (1-3):" << endl;
		cin >> choice;
		cout << " " << endl;
		switch (choice) {
		case 1:
			cout << "for - самый универсальный цикл в С++." << endl;
			break;
		case 2:
			cout << "if - инструкция условного ветвления." << endl;
			break;
		case 3:
			cout << "switch - инструкция многонаправленного ветвдения." << endl;
			break;
		default:
			cout << "Вы должны ввести число от 1 до 3." << endl;
		}
		system("pause");
	}

	{
		cout << "2АЯ ПРОГРАММА." << endl;
		int i;
		for (i = 0; i < 5; i++) {
			switch (i) {
			case 0: cout << "Меньше 1" << endl;
			case 1: cout << "Меньше 2" << endl;
			case 2: cout << "Меньше 3" << endl;
			case 3: cout << "Меньше 4" << endl;
			case 4: cout << "Меньше 5" << endl;
			}
			cout << '\n';
		}
		system("pause");
	}
	return 0;
}