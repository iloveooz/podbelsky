//p11-1O.cpp - безымянный входной строковый поток; 
// чтение данных с помощью операции извлечения >>

#include <iostream>
#include <strstream>

using namespace std;

int main (int Narg, char *arg[])
{
	char path[80];
	
	// чтение из безымянного потока:
	istrstream (arg[0]) >> path;
	
	cout << "\nПолное имя программы: " << path << endl;
	return 0;
}
