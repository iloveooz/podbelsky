//p2-16.cpp - динамическое распределение памяти
#include <iostream>

using namespace std;

int main() {
	
	int *i;
	
	i = new int(1);
	cout << "\n *i =  " << *i << "\t i = " << i;

	i = new int(5);
	cout << "\n *i =  " << *i << "\t i = " << i;

	i = new int(2**i);
	cout << "\n *i = " << *i << "\t i = " << i;

	i = new int(2**i);
	cout << "\n *i = " << *i << "\t i = " << i;

	delete i;

	cout << "\n После освобождения памяти:";
	cout << "\n *i = " << *i << "\t i = " << i;

	delete i;
	cout << "\n *i = " << *i << "\t i = " << i;

return 0;
}
