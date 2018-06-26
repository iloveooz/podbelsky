//p2-18.cpp - запятая как разделитель и как знак операция
#include <iostream>

using namespace std;

int main()
{ int i = 1, m[] = {i, (i=2,i*i), i };
  cout << "\ni = " << i << "\tm[2] = " << m[2];
  i++;
  cout << "\tm[1] = " << m[1] << "\tm[2] = " << m[2] << endl;

	return 0;
}
