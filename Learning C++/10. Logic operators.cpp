//функция xor
#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

bool xor(bool a, bool b);

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	bool p, q;
	cout << "Введите P (0 или 1): " << endl;
	cin >> p;
	cout << "Введите Q (0 или 1): " << endl;
	cin >> q;
	cout << "P и Q: " << (p && q) << '\n' << endl;
	cout << "P или Q: " << (p || q) << '\n' << endl;
	cout << "P XOR Q: " << xor(p, q) << '\n' << endl;
	system("pause");
	return 0;
}

bool xor(bool a, bool b)
{
	return (a || b) && !(a && b);
}
