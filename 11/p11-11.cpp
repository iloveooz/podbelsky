//p11-11.cpp - чтение из строковых потоков

#include <strstream>
#include <iostream>

using namespace std;

int main () {
	char *line = "000 111 \t222\n333\t444 555";
	char array [80]; // вспомогательный массив
	
	// чтение из безымянного потока до пробела:
	istrstream (line) >> array;
	cout << "\n array = " << array << endl;
	
	// повторное чтение из безымянного потока:
	istrstream (line) >> array;
	cout << "\n array = " << array << endl;
	
	// вызов функции getline() для безымянного потока:
	istrstream (line).getline(array, sizeof(array), '\0');
	cout << "\n array = " << array << endl;
	return 0;
}
