//p5-10.cpp - цепочка указателей на указатели
#include <iostream>

using namespace std;

int main( )
{
  int i = 88;
  int *pi = &i;
  int **ppi = &pi;
  int ***pppi = &ppi;
  int ****ppppi = &pppi;

  cout << "\n **** ppppi = " << **** ppppi << endl;
}
