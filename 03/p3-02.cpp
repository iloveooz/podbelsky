//p3-02.cpp - сфера действия формальных параметров прототипа

#include <iostream>

using namespace std;

//int oj = 5;

long fact (int z)
{ unsigned long m = 1;
  if (z < 0) return 0;
  for (int i = 1; i < z; m = ++i * m);
  //cout << "\n " << ::oj;
  return m;
}

int main()
{ int j = 1, K = 5;
  long fact(int K = 0); //прототип функции
  for ( ; j <= K; j++) cout << "\n arg = " << j << "   arg! = " << fact(j);
    cout << endl;
    return 0;
}
