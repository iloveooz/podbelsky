//p2-17.cpp - фигурные скобки в структуре и при ее инициализации
#include <iostream>

using std::cout;

int main()
{ long x, y, i, z;
  struct { long double pi; long double e; }
  constant = { 3.1415926535897932385, 2.7182818284590452354 };
  cout << "\n" << constant.pi << "\t" << constant.e;
  //вычисление n-го члена ряда Фибоначчи
  for ( x = 5, y = 6, i = 2; i < 5; z = x + y, x = y, y = z, i++);
  cout << "\n z = " << z << '\n';
  return 0;
}
