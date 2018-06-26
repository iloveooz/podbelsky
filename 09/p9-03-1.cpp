// p9-03-1.cpp - вызов компонентной функции через указатель на объект класса и указатель на компонентную функцию

#include <iostream>
#include "complex.cpp"

using std::cout;
using std::endl;

	int main() {

	complex A(22.2, 33.3);
	complex *ptA = &A;
	
	double& (complex::*ptComRe)();
	ptComRe = &complex::re;
	
	double& (complex::*ptComIm)();
	ptComIm = &complex::im;
		
	void (complex::*ptDisp)(void);
	ptDisp = &complex::display;
	
	A.id = 777;
	int (complex::*ptID);
	ptID = &complex::id;
	
			
	cout << " Вызов КФ через ИО: "; A.display();
	cout << "\n Вызов КД через ИО: " << A.id;
	
	cout << "\n Вызов КФ через УИО: "; ptA->display();
	cout << "\n Вызов КД через УИО: " << ptA->id;
	
	//cout << "\n Вызов через ИО и через УКФ: re = " << (A.*ptComRe)();
	//cout << "\n Вызов через ИО и через УКФ: im = " << (A.*ptComIm)();
	//cout << "\n Вызов через ИО и через УКД: " << A.*ptID;
	
	cout << "\n Вызов через ИО и через УКФ: "; (A.*ptDisp)();
	cout << "\n Вызов через ИО и через УКД: " << A.*ptID;
	
	cout << "\n Вызов через УИО на УКФ: "; (ptA->*ptDisp)();
	cout << "\n Вызов через УИО на УКД: " << ptA->*ptID;
	
	cout << endl;
	return 0;
}
