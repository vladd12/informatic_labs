// Угадай магическое число!
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cstdlib>
using namespace std;

void play(int m);

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	{
		int option;
		int magic;
		magic = rand();
		do {
			cout << "1. Получить новое магическое число." << endl;
			cout << "2. Сыграть!" << endl;
			cout << "3. Выйти из программы." << endl;
			do {
				cout << "Введите свой вариант: ";
				cin >> option;
			} while (option < 1 || option > 3);
			switch (option) {
			case 1:
				magic = rand();
				break;
			case 2:
				play(magic);
				break;
			case 3:
				cout << "До свидания!" << endl;
				break;
			}
		} while (option != 3);
		system("pause");
		return 0;
	}
}

	//игра
	void play(int m) {
		int t, x;
		for (t = 0; t < 100; t++) {
			cout << "Угадайте магическое число: ";
			cin >> x;
			if (x == m) {
				cout << "Правильно!" << endl;
				return;
			}
			else
			if (x < m) cout << "Маловато." << endl;
			else cout << "Многовато." << endl;
		}
		cout << "Вы использовали все шансы угадать число. " << "Попытайтесь снова." << endl;
		return;
	}