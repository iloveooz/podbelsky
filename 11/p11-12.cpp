//p11-12.cpp - запись в безымянный выходной строковый поток <<

#include <strstream>
#include <iostream>

using namespace std;

int main(int Narg, char *arg[]) {
	char path[80];
	ostrstream(path, sizeof(path)) << arg[0] << '\0';
	cout << "\nПолное имя программы: " << path << endl;
	return 0;
}
