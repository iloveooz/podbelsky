//p6-29.cpp - перегрузка функций
#include <iostream> 

using namespace std;

long max_element(int n, int array[])  // функция для массивов с элементами типа int
{
	int value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    cout << "\n Для (int)   :";
    return long (value);
}

long max_element(int n, long array[])  // функция для массивов с элементами типа long
{
	long value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    cout << "\n Для (long)  :";
    return value;
}

double max_element(int n, float array[])  // функция для массивов с элементами типа float
{
	float value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    cout << "\n Для (float) :";
    return double(value);
}

double max_element(int n, double array[])  // функция для массивов с элементами типа double
{
	double value = array[0];
	for (int i = 1; i < n; i++)
		value = value > array[i] ? value : array[i];
    
    cout << "\n Для (double):";
    return value;
}

int main () { 

	int x[] = {10, 20, 30, 40, 50, 60};
	long f[] = {12l, 44l, 5l, 22l, 37l, 30l};
	float y[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
	double z[] = {0.01, 0.02, 0.03, 0.04, 0.05, 0.06};

	cout << " max_elem(6, x) = " << max_element(6, x);
	cout << " max_elem(6, f) = " << max_element(6, f);
	cout << " max_elem(6, y) = " << max_element(6, y);
	cout << " max_elem(6, z) = " << max_element(6, z) << endl;
	return 0;
}
