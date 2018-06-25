//p2-09.cpp - размеры данных разных типов
#include <iostream>

using namespace std;

int main()
{ cout << "\nsizeof(int) = " << sizeof(int) << endl;
  cout << "\tsizeof(short) = " << sizeof(short) << endl;
  cout << "\tsizeof(long) = " << sizeof(long) << endl;
  cout << "\nsizeof(float) = " << sizeof(float) << endl;
  cout << "\tsizeof(double) = " << sizeof(long double) << endl;
  cout << "\tsizeof(char) = " << sizeof(char) << endl;
  
  char a[] = "ABCD";
  char b[] = "АБВГ";
  
  cout << "\t sizeof(char(a)) = " << sizeof(a) << endl;
  cout << "\t sizeof(char(b)) = " << sizeof(b) << endl;
    
	return 0;
}
