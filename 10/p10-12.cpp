//p10-12.cpp - шаблоны классов
	#include <iostream>
	using std::cout;

	template <class T, int size = 64>
	
	class row {
		T *data;
		int length;
		
		public: 
			row() { 
				length = size;
				data = new T[size];
			}
	
		~row() { delete[] data; }
	
		T& operator [] (int i) {
			return data[i]; 
		}
	};

	int main() {
		row <float,8> rf;
		row <int,8> ri;
	
	for (int i = 0; i < 8; i++) {
		rf[i] = i; ri[i] = i * i; 
	}
	
	for (int i = 0; i < 8; i++) cout << "   " << rf[i] << ' ' << ri[i] << '\n';
	return 0;
	}
