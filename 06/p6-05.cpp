//p6-05.cpp - макросредства для переменного списка параметров
#include <iostream>
#include <string.h>  // строки
#include <stdarg.h>  // макросредства
#include <stdlib.h>  // malloc()

using namespace std;

char *concat(char *s1, ...)
{
	va_list par;  // указатель на параметры списка
	char *cp = s1;
	int len = strlen(s1); // длина первого параметра
	va_start(par, s1);  // начало переменного списка
	
	// цикл для определения общей длины параметров-строк
	while (cp = va_arg(par, char *))
		len += strlen(cp);
    
    // выделение памяти для результата
    char *stroka = (char *)malloc(len + 1);
    strcpy(stroka, s1);
    
    va_start(par, s1); // начало переменного списка
    
    // цикл конкатенации параметров строк:
    while (cp = va_arg(par, char *))
		strcat(stroka, cp);  // конкатенация двух строк
    
    va_end(par);
    
    return stroka;
}

int main()
{  
	char * concat(char* s1, ...);
	
	char * s;
	
	s = concat("\nNulla ", "Dies ", "Sine ", "Linea!", " Римское право", NULL);
	s = concat(s, " - Ни одного дня без чёрточки!", "\n\t",
               "(Плиний старший о художнике Апелесе)",NULL);
	cout << s << endl;
	return 0;
}   

