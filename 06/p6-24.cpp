//p6-24.cpp - праводопустимые выражения в качестве параметров
#include <iostream> 

using namespace std;

int n = -55;

void invert(int & k = n) // инициализация параметра-ссылки
{ cout << "\n Значение параметра в функции invert(): k = ";
  cout << k;
  k = -k;
}

int main ()
{ int a = 22, b = 66, c = 0; // выделяется память для переменных
  
  invert(); // изменяется знак умалчиваемого параметра
  cout << "\n n = " << n;
  
  invert(a);
  cout << "\n a = " << a;
  
  c = a + b;
  
  invert(c); // переменные a и b не будут изменены
  cout << "\n a = " << a << "\t b = " << b;
  
  double d = 3.33;
  c = int(d);
  
  invert(c);
  
  cout << "\n d = " << d << endl;
  return 0;
}
