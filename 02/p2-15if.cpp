//p2-15if.cpp - условная операция
#include <iostream.h>
#include <conio.h>
void main()
{ int x = 5;
  x < 0 ? x = -x : x = x;
  cout << " 3TO x " << x << " Pa3MEP - " << sizeof x;
  x = -5;
  x < 0 ? x = -x : x = x;
  cout << "\n 3TO x " << x << " Pa3MEP - " << sizeof char(x);
getch();
}
