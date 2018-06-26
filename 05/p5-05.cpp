//p5-05.cpp - вычитание указателей
#include <iostream>

using namespace std;

int main()
{
	char ac = 'f', bc = '2';
	
	char *pac = &ac, *pbc = &bc;
	
	long int al = 3, bl = 4;
	long int *pal = &al, *pbl = &bl;
	
	cout << "\nЗначения и разности указателей:";
	cout << "\npac = " << (void *)pac << "\tpbc = " << (void *)pbc;
	cout << "\t(pac - pbc) = " << pac - pbc;
	
	cout << "\npal = " << pal << "\tpbl = " << pbl;
	cout << "\t(pbl - pal) = " << (pbl - pal);
	
	cout << "\nРазности числовых значений указателей:";
	cout << "\n(int)pac - (int)pbc = " << (int *)pac - (int *)pbc;
	cout << "\n(int)pbl - (int)pal = " << (int *)pbl - (int *)pal << endl;
	return 0;
}
