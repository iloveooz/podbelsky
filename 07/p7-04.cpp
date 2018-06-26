//p7-04.cpp - объединение выделяет scan и ASCII-коды клавиш
#include <iostream>
#include <bios.h>

using namespace std;

int main ()
{ 
	union { char hh[2]; int ii;} cc;
  
	unsigned char scn, asc;
  
	cout << "\n Выход из программы - ctrl + Z";
	cout << "\n\n SCAN | ASCII";
	do
	{
  		cout << "\n";
		while (bioskey(1) == 0);
		cc.ii = bioskey(0);
		cout << "sizeof(ii)" << sizeof(cc.ii);
		asc = cc.hh[0];
		scn = cc.hh[1];
		cout << " " << int(scn) << " | ";
		cout << int(asc) << " " << asc;
	}
	while (asc != 103 || scn != 34);
	return 0;
}
