//p11-09.cpp - копирование строки функцией getline().

#include <strstream>
#include <iostream>

using namespace std;

int main()
{
	char *line = "000 111 \t222\n333\t444 555";
	istrstream inpotok(line);

	char array[80];
	inpotok.getline(array, sizeof(array), '\0');
	cout << "\narray = " << array << endl;
	return 0;
}
