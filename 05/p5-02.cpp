//p5-02.cpp - указатель-константа на байт состояния клавиатуры
#include <iostream>

using namespace std;

int main(void)
{ char * const key_byte = ((char*)0x0410);
  cout << "\nБайт состояния клавиатуры:" << *key_byte;
  *key_byte = '`';
  cout << "\nБайт состояния клавиатуры: " << *key_byte << endl;
  return 0;;
}
