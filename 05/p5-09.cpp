//p5-09.cpp - адреса и длины указателей разных типов
#include <iostream>

using namespace std;

int main( )
{
  char *pac, *pbc;
  long *pal, *pbl;

  cout << "\nАдреса указателей:";

  cout << "\n &pac = " << &pac << " &pbc = " << &pbc;
  cout << "\n &pal = " << &pal << " &pbl = " << &pbl;

  cout << "\nДлины указателей некоторых типов:";
  cout << "\n sizeof(void *) = " << sizeof(void *);
  cout << "\n sizeof(char *) = " << sizeof(char *);
  cout << "\n sizeof(int *) = " << sizeof(int *);
  cout << "\n sizeof(long *) = " << sizeof(long *);
  cout << "\n sizeof(float *) = " << sizeof(float *);
  cout << "\n sizeof(double *) = " << sizeof(double *);
  cout << "\n sizeof(long double *) = " << sizeof(long double *) << endl;

  return 0;
}
