// циклы while и do-while
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
	//программа с циклом while
	{
		cout << "1АЯ ПРОГРАММА." << endl;
		int len;
		cout << "Введите длину строки от 1 до 999: ";
		cin >> len;
		while (len > 0 && len < 1000) {
			cout << '.' << endl;
			len--;
		}
		system("pause");
	}
	//программы с циклом do-while
	{
		cout << "2АЯ ПРОГРАММА." << endl;
		int num;
		do {
			cout << "Введите число (100 - для выхода): ";
			cin >> num;
		} while (num != 100);
		system("pause");
	}

	{
		cout << "Программа 'Угадай магическое число'" << endl;
		int magic;
		int guess;
		magic = rand(1-100);
		do {
			cout << "Введите свой вариант магического числа: ";
			cin >> guess;
			if (guess == magic) {
				cout << "Правильно! " << magic << " и есть магическое число!" << endl;
			}
			else {
				cout << "Очень жаль, но вы ошиблись." << endl;
				if (guess > magic)
					cout << "Ваш вариант превышает магическое число." << endl;
				else cout << "Ваш вариант меньше магического числа." << endl;
			}
		} while (guess != magic);
		system("pause");
	}
	return 0;
}