//p4-05.cpp - break при вложении переключателя в цикл
#include <iostream>

using namespace std;

int main()
{ 
	char c[] = "ABC1001111111111111111";
	int k0 = 0, k1 = 0;
	
	for (int i = 0; c[i] != '\0'; i++)
		switch (c[i])
		{
			case '0': k0++; break;
			case '1': k1++; break;

			default: break;
		}
	
	cout << "\nВ строке " << k0 << " нулей, " << k1 << " единиц" << endl;
	return 0;
}
