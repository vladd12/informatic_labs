// Функции
#include <iostream>

using namespace std;

void cube(int *n, int num);
void stringupper(char *str);
int mystrlen(char *str);
int findsubstr(char *sub, char *str);
int fact(int n);
int &put(int i);
int get(int i);
void mystrcat(char *s1, char *s2, int len = -1); // аргумент len по умолчанию равен -1

int vals[10];
int	error = -1;

int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	{
		// программа с передачей массива через указатель функции
		int i, nums[10];
		for (i = 0; i < 10; i++) nums[i] = i + 1;
		for (i = 0; i < 10; i++) cout << nums[i] << endl; // вывод массива
		cube(nums, 10); // вызываем функцию для преобразований
		cout << "Изменённое содержимое массива: ";
		for (i = 0; i < 10; i++) cout << nums[i] << ' '; // вывод изменённого массива
		cout << "\n" << endl;
	}
	
	{
		// программа с передачей строки функции
		char str[80];
		strcpy_s(str, "I like C++");
		stringupper(str);
		cout << str << endl;
	}
	
	{
		// реализация функции strlen()
		cout << "Длина строки ПРИВЕТ ВСЕМ равна: ";
		cout << mystrlen("ПРИВЕТ ВСЕМ") << endl;
	}
	
	{
		// программа нахождения подстроки в заданной строке
		int index = 0;
		index = findsubstr("три", "один, два, три");
		if (index == -1) cout << "Указанная подстрока не найдена!" << endl;
		else cout << "Индекс подстроки в строке равен: " << index << endl;
	}
	
	{
		// программа с рекурсивной функцией нахождения факториала введённого исла
		int input;
		int answer;
		cout << "Введите число, для которого надо найти фаткориал: ";
		cin >> input;
		cout << "Факториал числа " << input << " равен: " << endl;
		answer = fact(input);
		if (answer != 0) cout << answer << "." << endl;
	}
	
	{
		// безопасный массив
		put(0) = 10;
		cout << get(0) << endl;
		put(1) = 20;
		cout << get(1) << endl;
		put(9) = 30;
		cout << get(0) << endl;
		put(12) = 123; // тут ошибка
	}
	
	{
		// аргументы по умолчанию
		char str1[80] = "Это тест.";
		char str2[80] = "012345";
		mystrcat(str1, str2, 4);
		cout << str1 << endl;
		strcpy_s(str1, "Это тест.");
		mystrcat(str1, str2);
		cout << str1 << endl;
	}
	system("pause");
	return 0;
}

void cube(int *n, int num) {
	while (num) { // пока num != 0
		*n = (*n)*(*n)*(*n);
		num--;
		n++; // сдвиг на 4 байта
	}
}

void stringupper(char *str) {
	while (*str) { // пока str ненулевой указатель
		*str = toupper(*str); // сделать букву заглавной
		str++; // следующий байт
	}
}

int mystrlen(char *str) {
	int i;
	for (i = 0; str[i]; i++); // str[i] - условие, пока str ненулевой указатель
	return i;
}

int findsubstr(char *sub, char *str) {
	int i;
	char *p1, *p2;
	for (i = 0; str[i]; i++) {
		p1 = &str[i]; // получить адрес символа массива
		p2 = sub; // получить адрес всего массива
		while (*p2 && *p2 == *p1) { // если значения по адресам совпадают и p2 ненулевой указатель
			p1++;
			p2++;
		}
		if (!*p2) return i; // если p2 нулевой указатель, то строка найдена
	}
	return -1;
}

int fact(int n) {
	if (n < 0) {
		cout << "Ошибка! Число должно быть больше нуля!" << endl;
		return 0;
	}
	else if (n == 0 || n == 1) return 1;
	else return fact(n - 1)*n;
}


int &put(int i) {
	if (i >= 0 && i < 10)
		return vals[i];
	else {
		cout << "Ошибка нарушения границ массива." << endl;
		return error;
	}
}

int get(int i) {
	if (i >= 0 && i < 10)
		return vals[i];
	else {
		cout << "Ошибка нарушения границ массива." << endl;
		return error;
	}
}

void mystrcat(char *s1, char *s2, int len) {
	// реализация функции strcat
	while (*s1) s1++; // переход в конец строки s1
	if (len == -1) len = strlen(s2);
	while (*s2 && len) {
		*s1 = *s2; // копирование символов
		s1++;
		s2++;
		len--;
	}
	*s1 = '\0'; // завершение строки нулевым символом
}