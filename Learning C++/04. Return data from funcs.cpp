#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int mul (int x, int y); //прототип функции mul ()

int main()
{
	int answer;
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	answer = mul(10, 11); //присваивание возвращаемого функцией значения через целочисленное значение answer
	cout << "Ответ равен " << answer << endl;
	system("pause");
	return 0;
}

//Эта функция возвращает значение
int mul (int x, int y)
{
	return x * y; //
}