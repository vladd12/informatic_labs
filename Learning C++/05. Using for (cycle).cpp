//использование инструкции for
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int count;
	for (count = 1; count <= 100; count = count ++) //использование инкремента и цикла for
		cout << count << endl;
	system("pause");
	return 0;
}
