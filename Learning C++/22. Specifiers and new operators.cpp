// Спецификаторы, новые операторы и операции
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int r_avg(int i);
void disp_binary(unsigned u);
int div_zero();

int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "ru_RU.UTF-8");
	setlocale(LC_ALL, "");
	{
		// Вычисляет текущее среднее значение, введённое с клавиатуры
		int n;
		do {
			cout << "Введите числа (-1 означает выход): ";
			cin >> n;
			if (n != -1) cout << "Текущее среднее равно: " << r_avg(n) << endl;
		} while (n != -1);
	}
	
	{
		// разница в использовании обычных переменных и 
		// переменных со спецификатором register
		unsigned int i;
		unsigned int delay;
		register unsigned int j;
		long start, end;
		start = clock();
		for (delay = 0; delay < 50; delay++) for (i = 0; i < 64000000; i++);
		end = clock();
		cout << "Количество тактов для нерегистровой переменной: " << end - start << endl;
		start = clock();
		for (delay = 0; delay < 50; delay++) for (j = 0; j < 64000000; j++);
		end = clock();
		cout << "Количество тактов для регистровой переменной: " << end - start << endl;
	}
	
	{
		// перечисления (enum)
		enum apple {Jonathan, Corland, Golden_Del, Red_Del, Winesap};
		apple fruit;
		fruit = Winesap;
		cout << Jonathan << " " << Winesap << endl;
	}
	
	{
		// побитовые операции
		unsigned u;
		cout << "Введите число от 0 до 255: ";
		cin >> u;
		cout << "Введённое число в двоичном коде: ";
		disp_binary(u);
		cout << "Его инверсия: ";
		disp_binary(~u); // побитовая инверсия числа
	}
	
	{
		// операция сдвига
		int i = 1, t;
		for (t = 0; t < 8; t++) {
			disp_binary(i);
			i = i << 1;
		}
		for (t = 0; t < 8; t++) {
			i = i >> 1;
			disp_binary(i);
		}
	}
	
	{
		// использование тернарного оператора ?
		int i, j, result;
		cout << "Введите делимое и делитель: " << endl;
		cin >> i >> j;
		result = j ? i/j : div_zero();
		cout << result << endl;
	}
	
	{
		// использование оператора sizeof
		cout << "Размер типа int в байтах: " << sizeof(int) << endl;
		cout << "Размер типа char в байтах: " << sizeof(char) << endl;
		cout << "Размер типа float в байтах: " << sizeof(float) << endl;
		cout << "Размер типа double в байтах: " << sizeof(double) << endl;
	}
	
	{
		// динамический массив
		int input;
		cin >> input;
		int *p = new int[input];
		for (register int i = 0; i < input; i++) {
			p[i] = i;
			cout << p[i] << '\t' << p+i << endl;
		}
		delete[] p;
	}
	
	{
		// динамический массив в стиле си
		int input;
		cin >> input;
		size_t SIZE = input * sizeof(int);
		int *p = (int*) malloc(SIZE);
		for (int i = 0; i < input; i++) {
			*(p + i) = i;
			cout << *(p + i) << '\t' << p + i << endl;
		}
		free(p);
	}
	system("pause");
	return 0;
}

int r_avg(int i) {
	static int sum = 0, num = 0; // переменные не уничтожаются после выхода из функции из-за спецификатора static
	sum = sum + i;
	num++;
	return (sum/num);
}

void disp_binary(unsigned u) {
	for (register int t = 128; t > 0; t = t / 2) {
		if (u & t) cout << "1"; // побитовое И
		else cout << "0";
	}
	cout << "\n";
}

int div_zero() {
	cout << "На 0 делить нелья!" << endl;
	return 0;
}