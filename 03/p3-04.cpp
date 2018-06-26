//p3-04.cpp - переопределение внешнего имени внутри блока

#include <iostream>

using namespace std;

int main() {

char cc[] = "Число"; // массив автоматической памяти
float pi = 3.1415926; // переменная типа float

cout << "Обращение по внешнему имени: pi = " << pi;

{ // переменная типа double переопределяет pi:
long double pid = 3.1415926535897932385;
// видимы double pi и массив cc[]:
cout << '\n' << cc << " long double pid = " << pid;
}

// видимы float pi и массив cc[]:
cout << '\n' << cc << " float pi = " << pi << endl;

return 0;
}
