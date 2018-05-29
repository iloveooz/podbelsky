//x6-08.cpp - массивы строки в качестве параметров
#include <iostream>

using namespace std;

int len(char e[])
{
	int m = 0;
	while (e[m++]);
	return m - 1;
}
  
int main ()
{
	char E[] = "Pro Tempore!"; // "своевременно" (лат.)
	cout << "\nДлина строки \"" << E << "\" равна " << len(E) << endl;
	
	char D[] = "Escumulla Arsa!"; // "несвоевременно" (лат.)
	cout << "\nДлина строки \"" << D << "\" равна " << len(D) << endl;
	
	char P[] = "Слово о полку Игореве!"; // "былина" (др.рус.)
	cout << "\nДлина строки \"" << P << "\" равна " << len(P) << endl;
	
	
	return 0;
}
