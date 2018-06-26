//p3-01.cpp - размеры разных типов данных

#include <iostream>

using namespace std;

int main()
{ int i;
  unsigned int ui;
  long l;
  unsigned long ul;
  double d;
  long double ld;
  
  cout << "\n sizeof (int) = " << sizeof(i);
  cout << "\t sizeof (unsigned int) = " << sizeof(ui);
  cout << "\n sizeof (long) = " << sizeof(l);
  cout << "\t sizeof (unsigned long) = " << sizeof(ul);
  cout << "\n sizeof (double) = " << sizeof(d);
  cout << "\t sizeof (long double) = " << sizeof(ld);
  
  cout << endl;
  
	return 0;
}
