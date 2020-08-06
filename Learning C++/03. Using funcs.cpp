//ёзаем функцию mul
#include <iostream>
#include <cstdlib>
using namespace std;

void mul(int x, int y); //прототип функции mul ()

int main()
{
	mul(10, 20); //использование чисел
	mul(5, 6); //использование чисел
	mul(8, 9); //использование чисел
	system("pause");
	return 0;
}

void mul(int x, int y)
{
	cout << x * y << " " << endl; //умножение чисел внутри функции mul и их вывод
}