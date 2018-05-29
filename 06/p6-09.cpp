//p6-09.cpp - одномерные массивы в качестве параметров
#include <iostream> 
#include <cmath>

using namespace std;

float cosinus(int n, float x[], float y[])
{
	float a = 0, b = 0, c = 0;
	
	for (int i = 0; i < n; i++)
	{
		a += x[i] * y[i];
		b += x[i] * x[i];
		c += y[i] * y[i];
	}
	
	return a / sqrt(double(b * c));
}

int main ()
{
	float E[] = { 1,  1,  1,  1,  1,  1,  1};
	float G[] = {-1, -1, -1, -1, -1, -1, -1};
  
	cout << "\n Косинус = " << cosinus(2, E, G) << endl;
	return 0;
}
