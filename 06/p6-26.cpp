//p6-26.cpp - ссылка и указатель на функцию
#include <iostream>

using namespace std;

// функция определяет ссылку на элемент массива с максимальным значением
int& rmax(int n, int d[])
{
	int im = 0;
	for (int i = 1; i < n; i++) 
		im = d[im] > d[i] ? im : i;
	return d[im];
}

int main() 
{
	int n = 5;
	int x[] = { 10, 20, 30, 14, 92 };
	
	cout << "\n rmax(n, x) = " << rmax(n, x) << '\n';;
	rmax(n, x) = 0;
	
	for (int i = 0; i < n; i++)
		cout << " x[" << i << "] = " << x[i] << ',';
	cout << endl;
	return 0;
}
