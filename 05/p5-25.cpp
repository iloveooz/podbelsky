//p5-25.cpp - некоторые особенности сегментных указателей
#include <iostream>

using namespace std;

int main ()
{
	int near *pn = (int near *)0x0007;
	int _seg *ps = (int _seg *)0x0041;
	int far *pf;

	pf = ps + pn;
	
	cout << "\npf = " << (void *)pf;
	cout << " *pf = " << *(char *)pf << endl;
	
	return 0;
}
