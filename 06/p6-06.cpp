//p6-06.cpp - упрощенный аналог printf()
// по мотивам K&R
#include <iostream>
#include <stdarg.h>

using namespace std;

void miniprint(char *format, ...)
{
	va_list ap; // указатель на необязательный параметр
	char *p;    // для просмотра строки format
	int ii;     // целые параметры
	double dd;  // параметры типа DOUBLE
	
	va_start(ap, format); // настроились на первый параметр
   
	for (p = format; *p; p++)
	{
		if (*p != '%')
        {
			cout << *p;
			continue;
        }
		
		switch  (*++p)
		{
			case 'd': ii = va_arg(ap, int);
				cout << ii;
            break;
        
			case 'f': dd = va_arg(ap, double);
				cout << dd;
            break;
			
			default: cout << *p;
		} // конец переключателя
	}      // конец цикла просмотра строки-формата
   va_end(ap);
}

int main()
{
	void miniprint(char *, ...);  //прототип
	int k = 154;
	double e = 2.718282;
	miniprint("\nЦелое k = %d,\t число e = %f", k, e);
	
	cout << endl;
	return 0;
}
