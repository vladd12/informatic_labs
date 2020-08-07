// Указатели
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	
	{
		cout << "1АЯ ПРОГРАММА." << endl;
		int balance;
		int *balptr;
		int value;
		balance = 3200;
		balptr = &balance; //присвоение
		value = *balptr;
		cout << "Баланс равен: " << balance << endl;
		cout << "Адрес переменной balance: " << balptr << endl;
		cout << "Баланс в переменной value: " << value << '\n' << endl;
	}

	{
		cout << "2АЯ ПРОГРАММА." << endl;
		double x, y;
		int *p;
		x = 123.23;
		p = (int *)&x; // операция приведения типа x к типу int и получения адреса x
		y = *p; // получение переменной по адресу в переменной p
		cout << y << '\n' << endl; // тут при выводе получим не 123, а мусор из памяти
	}

	{
		cout << "3Я ПРОГРАММА." << endl;
		// выводит адреса в зависимости от размера переменных
		int *i, j[10];
		double *f, g[10];
		int x;
		i = j;
		f = g;
		for (x = 0; x < 10; x++)
			cout << i + x << ' ' << f + x << '\n' << endl;
	}

	{
		// Разбиение строки на подстроки через пробел
		// Не работает с русскими символами
		char str[80];
		char token[80];
		char *p, *q;
		cout << "Введите предложение: " << endl;
		gets_s(str);
		p = str;
		// Считываем лексему из строки
		while (*p) {
			q = token;
			while (*p!=' ' && *p) {
				*q = *p;
				q++; p++;
			}
			if (*p) p++; // Перемещение за пробел
			*q = '\0'; // Завершение лексемы нулевым символом
			cout << token << endl;
		}
	}

	{
		cout << "Программа для предсказания." << endl;
		srand(time(0));
		char *fortunes[] = {
			"Вскоре деньги потекут к Вам рекой.\n",
			"Вашу жизнь озарит новая любовь.\n",
			"Вы будете жить долго и счастливо.\n",
			"Деньги, вложенные сейчас в дело, принесут доход.\n",
			"Близкий друг будет искать Вашего расположения.\n"
		};
		cout << endl;
		int chance = rand();
		chance = chance % 5;
		cout << chance << endl;
		cout << fortunes[chance] << endl;
	}

	{
		// программа выводит ASCII-коды символов введённой строки
		char s[100];
		char *p;
		do {
			cout << "Введите строку: ";
			gets_s(s); // считываем строку
			p = s; // присваиваем значение при каждой итерации цикла
			while (*p) cout << (int) *p++ << ' ' << endl;
		} while (strcmp(s, "EXIT"));
	}
	
	system("pause");
	return 0;
}