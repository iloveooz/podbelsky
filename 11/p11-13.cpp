// запись в безымянный выходной строковый поток; 
// копирование строки с использованием функции write()

#include <strstream>
#include <iostream>

using namespace std;

int main () {
	char lat[] = "Quod erat demonstrandum!";
	char rus[] = " - Что и требовалось доказать!";
	
	char result[90];

	ostrstream(result, sizeof(result)).write(lat, sizeof(lat));
	
	cout << '\n' << result << endl;
	
	ostrstream(result, sizeof(result), ios::ate).write(rus, sizeof(rus));

	cout << '\n' << result << endl;
	return 0;
}
