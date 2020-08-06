//приведение типов
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	int i; // wchar_t i;
	for (i = 1; i <= 100; i = ++i) // for (i = A; i <= Z; i = ++i)
		cout << i << "/2 равно" << (float)i / 2 << '\n' << endl;
	int x, y, xx;
	bool temp;
	cout << "Введите первое рандомное число: " << endl;
	cin >> x;
	cout << "Введите второе рандомное число: " << endl;
	cin >> y;
	cout << "А теперь смотри: " << endl;
	xx = (10 / y) * (127 / x);
	cout << (float)xx / 2 << endl;
	cout << "Круто, да? А теперь смотри сюда: " << endl;
	temp = (xx / y) - (34 * x) + (127 * 3);
	cout << (double)temp * 2 << endl;
	cout << "Конец шоу, закрывай консоль." << endl;
	// P.S. Если заменить строки, где есть комментарии, закомменитированным кодом, то ваша консоль умрёт :)
	system("pause");
	return 0;
}