//p3-03.cpp - область действия глобальных имён
#include <iostream>

using namespace std;

int LC;
char c[] = "СССР!";

void WW(void)
{ LC = sizeof(c); }

void prin(void)
{ cout << "\nДлина строки с = " << LC << "\n";
  
  for (int i = 0; i <= LC; i++) cout << c[i];
}

int main(void) {
	WW();
	prin();
	cout << endl;
	return 0;
}
