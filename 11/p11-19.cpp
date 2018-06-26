	//p11-19.cpp - запись структур в файл перегруженной операцией <<

	#include <fstream>
	#include <stdlib.h>
	#include <iostream>

	using namespace std;

	// определение некоторой структуры
	struct element {
		int nk, nl;
		float zn;
	};
	
	// операция-функция, расширяющая действие операции >> 
	ofstream& operator << (ofstream& out, element el) {
		out << ' ' << el.nk << ' ' << el.nl << el.zn << '\n';
		return out;
	}

	int main() {
		const int numbeEL = 5;
		element arel[numbeEL] = { 1, 2, 3.45, 2, 3, 4.56, 22, 11, 45.6, 3, 24, 4.33, 3, 6, -5.3};
		
		ofstream file1("abc.txt", ios::app);
		if (!file1) {
			cerr << "Неудача при открытии файла ABC.txt.";
			return 1;
		}
		for (int i = 0; i < numbeEL; i++) file1 << arel[i]; 
			
		cout << endl;
		return 0;	  
	}
