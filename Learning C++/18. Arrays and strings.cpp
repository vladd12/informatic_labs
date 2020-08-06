// Массивы и строки.
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cstdio>
#include <cstring>

using namespace std;

bool password();

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	
	{
		cout << "Одномерные массивы." << endl;
		int sample[10]; //резервируем область памяти для 10 элементов типа int.
		int t;
		//Помещаем в массив значения.
		for (t = 0; t < 10; ++t) sample[t] = t;
		//Отображаем массив.
		for (t = 0; t < 10; ++t) cout << sample[t] << ' ' << endl;
		system("pause");
	}
	
	{
		cout << "Рандом и максимальные-минимальные значения переменных в массивах." << endl;
		int i, min_value, max_value;
		int list[10];
		for (i = 0; i < 10; i++) list[i] = rand();

		//Находим минимальное значение.
		min_value = list[0];
		for (i = 1; i < 10; i++)
		if (min_value > list[i]) min_value = list[i];
		cout << "Минимальное значение: " << min_value << endl;

		//Находим максимальное значение.
		max_value = list[0];
		for (i = 1; i < 10; i++)
		if (max_value > list[i]) max_value = list[i];
		cout << "Максимальное значение: " << max_value << endl;
		system("pause");
	}
	
	{
		cout << "Метод пузырьковой сортировки для упорядочения в массиве." << endl;
		int nums[10];
		int a, b, t;
		int size;
		size = 10; //кол-во элментов, подлежащих сортировке.
		//Помещаем в массиве случайные числа.
		for (t = 0; t < size; t++) nums[t] = rand();
		//Отображаем исходный массив.
		cout << "Исходный массив: " << endl;
		for (t = 0; t < size; t++) cout << nums[t] << ' ' << endl;
		// Реализация метода пузырьковой сортировки.
		for (a = 1; a < size; a++)
		for (b = size - 1; b >= a; b--) {
			if (nums[b - 1] > nums[b]) { //Элементы неупорядочены.
				//Меняем элементы местами.
				t = nums[b - 1];
				nums[b - 1] = nums[b];
				nums[b] = t;
			}
		}
		//Конец пузырьковой сортировки.
		//Отображаем отсортированный массив.
		cout << "Отсортированный массив: " << endl;
		for (t = 0; t < size; t++) cout << nums[t] << ' ' << endl;
		system("pause");
	}
	
	{
		cout << "Функция strcpy_s()." << endl;
		char str[80];
		strcpy_s(str, "Привет, пидор! :)"); //копирование строки в строку str
		cout << str << endl;
		system("pause");
	}
	
	{
		cout << "Функция strcat_s()." << endl;
		char s1[20], s2[10];
		strcpy_s(s1, "Привет");
		strcpy_s(s2, " всем!");
		strcat_s(s1, s2); //присоединяет строку s2 к концу строки s1
		cout << s1 << endl;
		system("pause");
	}
	
	{
		cout << "Функция strcmp()" << endl;
		if (password()) cout << "Вход разрешён." << endl;
		else cout << "В доступе отказано." << endl;
		system("pause");
	}
	
	{
		//вычисление длины строки
		cout << "Функция strlen()" << endl;
		char str[80]; 
		cout << "Введите строку: ";
		gets_s(str);
		cout << "Длина строки равна: " << strlen(str) << endl;
		system("pause");
	}
	
	{
		cout << "Отображение строки в обратном порядке." << endl;
		char str[80];
		int i;
		cout << "Введите строку: ";
		gets_s(str);
		for (i = strlen(str - 1); i >= 0; i--) cout << str[i];
		cout << endl;
		cout << "Вот." << endl;
		system("pause");
	}
	
	{
		cout << "Special Edition." << endl;
		char s1[80], s2[80]; cout << "Введите две строки: ";
		gets_s(s1); gets_s(s2);
		cout << "Их длины равны:" << strlen(s1) << " и " << strlen(s2) << endl;
		if (!strcmp(s1, s2))
			cout << "Строки равны." << endl;
		else cout << "Строки не равны." << endl;
		strcat_s(s1, s2);
		cout << s1 << endl;
		strcpy_s(s1, s2);
		cout << s1 << " и " << s2 << ' ';
		cout << "теперь равны." << endl;
		system("pause");
	}
	return 0;
}

//Функция возвращает значение true, если пароль принят, и
//значение false в противном случае.
bool password()
{
	char s[80];
	cout << "Введите пароль: ";
	gets_s(s);
	if (strcmp(s, "пароль")) { //Строки различны
		cout << "Пароль недействителен." << endl;
		return false;
	}
}