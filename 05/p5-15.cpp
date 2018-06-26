//p5-15.cpp - копирование массивов-строк
#include <iostream>
#include <string.h> // для функции strlen()

using namespace std;

int main()
{
	char *arch = "0123456789"; // массив из 11 элементов
	int k = strlen(arch) + 1;  // k - размер массива
	
	char *newar = new char(k); // динамический массив

	for (int i = 0; i < k;)
	{
		newar[i++] = *arch++;
		cout << "\narch = " << arch << "  " << !(i % 3);
	}
	
	cout << "\nk = " << k << " newar = " << newar;
	cout << "\nsizeof(arch) = " << sizeof(arch) << endl;
	
	for (int i = 0; i < (k - 1); i++) cout << *(newar + i) << endl;
	
	cout << sizeof(long) << endl;
	
	return 0;
}
