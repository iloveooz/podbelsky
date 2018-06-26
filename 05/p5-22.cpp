//p5-22.cpp - сравнение и аддитивные операции с far-указателями
#include <iostream.h> // g/\9 BBOga/Bb|Boga
#include <conio.h>
#include <dos.h> // MK_FP();
void main ( void )
{ int far *u1, far *u2;
  u1 = ( int far *)MK_FP(0x8000, 0xfff0);
  u2 = u1 + 0x20;
  clrscr();
  cout << "\nu1 = " << u1;
  cout << "\nu2 = " << u2;
  cout << "\nu2 - 0x20 = " << u2 - 0x20;
  u2 = (int far *)MK_FP(0x6000,0xffff);
  cout << "\nu2 = " << u2;
  cout << "\n(u1 >+ u2) = " << (u1 >= u2);
  getch();
}
