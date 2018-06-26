//p5-14.cpp - адреса массивов и использование указателей для доступа
#include <iostream>

using namespace std;

int main()
{
	int A[] = { 1, 2, 3, 4, 5, 6 };
	int B[] = { 1, 2, 3, 4, 5, 6 };
	
	int *pA = A, *pB = &B[5];
	int *Y = new int[30];
	
	cout << "\nsizeof(int) = " << sizeof(int);
	cout << "\nАдреса массивов: &A = " << &A << " &B = " << &B << "\n";
	
	while (*pA < *pB)
	cout << "  *pA++ + *pB-- = " << *pA++ + *pB--;
	
	cout << "\nЗначения указателей после цикла:";
	cout << "\n pA = " << pA << "  pB = " << pB;
	
	cout << "\n" << sizeof(*Y);
return 0;
}
