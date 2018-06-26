//p8-02.cpp - особенности макроопределений с параметрами

using namespace std;

#define max(a,b) (a < b ? b : a)
#define t(e) (e) * 3
#define PRNT(c) cout << "\n" << #c << " равно " << c;
#define E x*x

#include <iostream>

int main ( )
{  
	int x = 2;
	PRNT(max(++x, ++x));
	PRNT(t(x));
	PRNT(t(x + x));
	PRNT(t(x + x)/3);
	PRNT(E);
	
	cout << '\n' << __DATE__;
	cout << '\n' << __TIME__;
	cout << '\n' << __LINE__;
	cout << '\n' << __FILE__;
	cout << '\n' << __STDC__;
	cout << '\n' << __cplusplus;
	//cout << '\n' << __Windows__;
	
	cout << endl;
	return 0;
}
