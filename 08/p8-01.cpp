//p8-01.cpp - препроцессорное формирование текста программы
#include <iostream>

void invert(char *e)
{ 
	char s;
	//int m = 0;
	
	for (int m = 0; e[m] != '\0'; m++)
		{
			for (int i = 0, j = m - 1; i < j; i++, j--)
				{ 
					s = e[i]; 
					e[i] = e[j]; 
					e[j] = s; 
				}
		}
}

void conc (char* c1, char* c2)
{ 
	int m = 0, i = 0;
	
	for (int m = 0; c1[m] != '\0'; m++)
		for (int i = 0; c2[i] != '\0'; i++) 
			c1[m + i] = c2[i];
	c1[m + i] = '\0';
}

using namespace std;

int main ()
{ 
	char slovo[81], sp[81], c = ' ', *ptr = slovo;
	sp[0] = '\0';
	cout << "\nВведите предложение с точкой в конце: ";
	do
    { 
		cin >> slovo;
		invert(slovo);
		c = slovo[0];
		if (c == '.') ptr = &slovo[1];
		if (sp[0] != '\0') conc(sp, " \0");
		conc(sp, ptr);
    }
	while (c != '.');
	conc(sp, ".\0");
	cout << "\n" << sp << '\n';
	return 0;
}
