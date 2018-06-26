//p5-12.cpp - работа с элементами массива без скобок []
#include <iostream>

using namespace std;

int main( )
{
	char x[] = "DIXI"; // Я сказал (Высказался)"
	
	int i = 0;
	
	while (*(x + i))
	cout << "\n" << *(x + i++);
	
	cout << endl;
	cout << endl;
	return 0;
}
