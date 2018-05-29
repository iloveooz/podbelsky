//p6-21.cpp - упорядочение с помощью библиотечной функции qsort()
#include <iostream>
#include <stdlib.h> 
#include <cstring>  

using namespace std;

// определение функции для сравнения
int sravni (const void *a, const void *b)
{
  return strcmp ( (char *) (* (unsigned long *) a), (char *) (*(unsigned long *)b));
}

int main ()
{ 
	char *pc[] = {	"Sine Cura - Синекура",
					"Pro Forma - Ради формы",
					"Differentia Specifica - Отличительная особенность",
					"Alea Jacta Est! - Жребий брошен",
					"Idem Per Idem - Определение через определяемое",
					"Fiat Lux! - Да будет свет",
					"Multa Pan Cis - Многое в немногих словах" };
					
	// размер таблицы
	int n = sizeof(pc) / sizeof(pc[0]);
  
	cout << "\n n = " << n << ". До сортировки:" << hex;
	
	for (int i = 0; i < n; i++)
		cout << "\n pc[" << i << "] = " << (unsigned long)pc[i] << " -> " << pc[i];
  
	// вызов функции упорядочения
	qsort 	((void *) 	pc,   // адрес начала сортируемой таблицы
						n, // количество элементов сортируемой таблицы
						sizeof(pc[0]),  // размер одного элемента
						sravni      // имя функции сравнения (указатель)
			);
			
	cout << "\n\n После сортировки";
	for (int i = 0; i < n; i++)
		cout << "\n pc[" << i << "] = " << (unsigned long)pc[i] << " -> " << pc[i];
  
	cout << endl;
	return 0;
}
