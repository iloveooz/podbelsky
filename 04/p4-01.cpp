//p4-01.cpp - обращение к функции как оператор-выражение
#include <iostream>

using namespace std;

void cod_char(char c) {
	cout << "\n " << c << " = " << (unsigned int)c;
}

int main() {
	void cod_char(char); // прототип функции

functions_section:  
  cod_char('A');      // оператор-выражение
  cod_char('x');      // оператор-выражение
  cod_char('a');      // оператор-выражение
  cod_char('b');      // оператор-выражение
  cod_char('j');      // оператор-выражение
  cod_char('!');      // оператор-выражение
  cod_char('+');      // оператор-выражение
  cod_char('i');      // оператор-выражение
  cod_char('D');      // оператор-выражение
  cod_char(')');      // оператор-выражение
  
  for (int i = 0, p = 1; i < 5; i++, p *= i) 
  
  cout << "p = " << p << endl;
  
  return 0;
}
