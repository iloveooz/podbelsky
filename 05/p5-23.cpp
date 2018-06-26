//p5-23.cpp - сегментная и относительная части far-указателей
#include <iostream>
#include <conio.h>
#include <dos.h>
void main ( void )
{ char far *str = "CTPOKA ABTOMATu4ECKOu nAM9Tu";
  clrscr();
  cout << "\nAgPEC CTPOKu: " << (void *)str;
  cout << "\nCErMEHTHA9 4ACTb AgPECA CTPOKu: ";
  cout << hex << FP_SEG(str);
  cout << "\nCMeLLLeHue g\/\\9agPECA 3TOu CTPOku: ";
  cout << hex << FP_OFF(str);
  getch();
}
