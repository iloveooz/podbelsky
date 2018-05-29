//p6-01.cpp - определения, прототипы и вызовы функций
#include <iostream>

using namespace std;

void display(int value = 1, char* name = "Номер дома: ")
{
	cout << "\n" << name << " " << value;
}

int main()
{
	void print (char *, int);
	float cube (float x = 0);
	int max(int, int);
	
	int sum = 5, k = 2;
	sum = max((int)cube(float(k)), sum);

	print("Номер комнаты: ", 15);
	display(15, "Размерность пространства: ");
	
	cout << endl;
	return 0;
}

void print (char * name = "Номер дома: ", int value = 1)
{
	cout << "\n" << name << " " << value;
}

float cube (float x)
{
	return x * x * x;
}

int max (int n, int m)
{
	return n < m ? m : n;
}
