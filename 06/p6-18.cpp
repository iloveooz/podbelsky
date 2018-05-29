//p6-18.cpp - вызов функций по адресам через указатель
#include <iostream>

using namespace std;

int add  (int n, int m)  { return n + m; }
int div  (int n, int m)  { return n / m; }
int mult (int n, int m)  { return n * m; }
int subt (int n, int m)  { return n - m; }

int main ()
{
	int (*par) ( int, int ); // указатель на функцию
	int a = 16, b = 4;
	char c = '+';
	while ( c != ' ' )
    {
		cout << "\n Аргументы: a = " << a << ", b = " << b;
		cout << ". Результат для c = \'" << c << "\'" << " равен ";
      
		switch(c)
		{ 
			case '+': par = add; c = '/'; break;
			case '-': par = subt; c = ' '; break;
			case '*': par = mult; c = '-'; break;
			case '/': par = div; c = '*'; break;
		}
		cout << (a = (*par) (a, b)); // вызов по адресу
	}
	cout << endl;
	return 0;
}
