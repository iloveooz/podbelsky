//p2-13.cpp - изменение видимости внешней переменной
#include <iostream>

using namespace std;

int k = 15;

int main()
{ int k = 10;
  cout << "\nBHELL|H. nEPEMEHHA9 k = " << ::k;
  cout << "\nBHyTPEHH. nEPEMEHHA9 k = " << k;
  ::k = 0;
  
  cout << "\nBHELL|H. nEPEMEHHA9 k = " << ::k;
  cout << "\nBHyTPEHH. nEPEMEHHA9 k = " << k;
  return 0;
}
