//p6-04.cpp - меняются тип и количество параметров функции
#include <iostream>

using namespace std;

int main()
{
  long minimum (char z, int k, ...); // прототип функции
  cout << "\n\tminimum('l', 3, 10L, 20L, 30L) = " <<
               minimum('l', 3, 10L, 20L, 30L);
  cout << "\n\tminimum('i', 4,  11,   3,   10,  4) = " <<
  					minimum('i', 4,  11,   3,   10,  4);
  cout << "\n\tminimum('k', 2,   0,  64) =  " << minimum('k', 2, 0, 64) << endl;
  return 0;
}

// функция с переменным списком параметров
long minimum(char z, int k, ...)
{
	if (z == 'i')
		{ int *pi = &k + 1; // настроились на первый необязательный параметр
        int  min = *pi;   // значение первого необязательного параметра
        for (; k; k--, pi++)
        min = min > *pi ? *pi : min;
        return (long)min;
      }

   if (z == 'l')
      { long *pl = (long*)(&k + 1);
        long min = *pl; // значение первого параметра
        for (; k; k--, pl++)
        min = min > *pl ? *pl : min;
        return (long)min;
      }
   cout << "\nОшибка! Неверно задан 1-й параметр:";
   return 2222L;
}
