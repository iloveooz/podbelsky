//p5-04.cpp - неявное приведение типа void * к стандартным типам
#include <iostream>

using namespace std;

int main()
{
	void *vp;
	int i = 77;
	int *g = &i;
	float Euler = 2.718282;
	
	unsigned int *uip1 = NULL, *uip2;
	
	cout << "\nНачальное значение vp = " << vp;

	vp = &i; // настроились на int
	cout << "\nvp = " << vp << "\t*(int *)vp = " << *(int *)vp;

	vp = &Euler; // настроились на float
	cout << "\nvp = " << vp << "\t*(float *)vp = " << *(float *)vp;
	
	cout << "\n\n\n" << &g << endl;
	
	uip2 = (unsigned int *)&uip1;
	
	cout << "uip1 = " << uip1 << endl;
	cout << "uip2 = " << uip2 << endl;
	
	//cout << "*uip1 = " << *uip1 << endl;
	//cout << "*uip2 = " << *uip2 << endl;
	
	
	return 0;
}
