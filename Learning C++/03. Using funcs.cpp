//����� ������� mul
#include <iostream>
#include <cstdlib>
using namespace std;

void mul(int x, int y); //�������� ������� mul ()

int main()
{
	mul(10, 20); //������������� �����
	mul(5, 6); //������������� �����
	mul(8, 9); //������������� �����
	system("pause");
	return 0;
}

void mul(int x, int y)
{
	cout << x * y << " " << endl; //��������� ����� ������ ������� mul � �� �����
}