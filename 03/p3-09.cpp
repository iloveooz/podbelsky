//p3-09.cpp - динамическое выделение памяти для объектов
#include <stdlib.h> // Прототипы malloc() и free()
#include <iostream>    // Для cout

using namespace std;

int main(void) { 

int *t; // Память выделена только для t, но не для *t

int *m = (int *)malloc(sizeof(int)); // Память выделена для m и *m

*m = 10; t = m;  // Запомнили значение указателя

// Память выделена для *m:
m = (int *)malloc(sizeof(int));
*m = 20;

cout << "\nВторое значение *m = " << *m;

free(m); // Освободить память выделенную для *m

cout << "\nПервое значение *m = " << *t << endl;
free(t); // Освободить память выделенную для *m 

return 0;
}
