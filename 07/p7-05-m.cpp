//p7-05.cpp - битовые поля, структуры, объединения
#include <iostream>

using namespace std;

// функция упаковывает в один байт остатки от деления на 16 двух целых чисел - параметров:
unsigned char cod(int a, int b)
{
	union {	
			unsigned char z; 
			struct 	{
						unsigned int x:8; // младшие биты
						unsigned int y:8; // старшие биты
					} hh;
		  } un;
			
	un.hh.x = a % 32;
	un.hh.y = b % 32;
  
  	cout << "un.hh.x = " << un.hh.x << endl;
	cout << "un.hh.y = " << un.hh.y << endl;
	//cout << "sizeof(un.hh.x) = " << sizeof(un.hh.x) << endl;
	//cout << "sizeof(un.hh.y) = " << sizeof(un.hh.y) << endl;
	cout << "sizeof(un) = " << sizeof(un) << ", &un = " << &un << endl;
	cout << "sizeof(un.hh) = " << sizeof(un.hh) << ", &un.hh = " << &un.hh << endl;
	cout << "sizeof(un.z) = " << sizeof(un.z) << ", &un.z = " << &un.z << endl;
  
	return un.z;
}

// функция изображает на экране двоичное представление байта-параметра
void binar (unsigned char ch)
{ 
	union { unsigned char ss;
			struct { unsigned a0:1;
          			 unsigned a1:1;
					 unsigned a2:1;
                     unsigned a3:1;
                     unsigned a4:1;
                     unsigned a5:1;
                     unsigned a6:1;
                     unsigned a7:1;
                    } byte1, byte2;
                     
			/*struct	   { unsigned a0:1;
          			 unsigned a1:1;
					 unsigned a2:1;
                     unsigned a3:1;
                     unsigned a4:1;
                     unsigned a5:1;
                     unsigned a6:1;
                     unsigned a7:1;
                   } byte2;*/
          } cod;
          
 cod.ss = ch; // занести значение параметра в объединение

// вводим биты внутреннего кода значения параметра:
	cout << "\nНомера битов:  15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0";
	cout << "\nЗначения битов: ";
	cout << cod.byte2.a7 << "  " << cod.byte2.a6 << "  " << cod.byte2.a5 << "  " << cod.byte2.a4 << "  ";
	cout << cod.byte2.a3 << "  " << cod.byte2.a2 << " " << cod.byte2.a1 << " " << cod.byte2.a0 << " ";
	cout << cod.byte1.a7 << " " << cod.byte1.a6 << " " << cod.byte1.a5 << " " << cod.byte1.a4 << " ";
	cout << cod.byte1.a3 << " " << cod.byte1.a2 << " " << cod.byte1.a1 << " " << cod.byte1.a0;
	cout << "\n";
	
	cout << hex;
	cout << "sizeof(cod) = " << sizeof(cod) << ", &cod = " << &cod << endl;
	cout << "sizeof(cod.byte1) = " << sizeof(cod.byte1) << ", &cod.byte1 = " << &cod.byte1 << endl;
	cout << "sizeof(cod.byte2) = " << sizeof(cod.byte2) << ", &cod.byte2 = " << &cod.byte2 << endl;
	cout << "sizeof(cod.ss) = " << sizeof(cod.ss) << ", &cod.ss = " << &cod.ss << endl;
}

int main ( )
{
	int k;
	int ml, st;
	cout << "\nml = "; cin >> ml;
	cout << "st = "; cin >> st;
	
	k = cod(ml, st);
	cout << "cod = " << k;
	binar(k);
       
	return 0;
}
