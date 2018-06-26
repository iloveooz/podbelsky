//p10-04.cpp - множественное наследование с виртуальным базовым классом

#include <iostream>

using std::cout;

	// Базовый класс
	class base {
		int jj;
		char cc;
		char vv[10];
		
		public:
			base (int j = 0, char c = '*') {
				jj = j;
				cc = c;
			}
	};
	
	class dbase : public virtual base {
		double dd;
		
		public:
			dbase (double d = 0.0) : base() {
				dd = d;
			}
	};
	
	class fbase : public virtual base {
		float ff;
		
		public:
			fbase (float f = 0.0) : base() {
				ff = f;
			}
	};
	
	class top : public dbase, public fbase {
		long tt;
		
		public:
			top (long t = 0) : dbase(), fbase() {
				tt = t;
			}
	};
	
	int main() {
		cout << "\nОсновной базовый класс: sizeof(base) = " << sizeof(base);
		cout << "\n Непосредственная база: sizeof(dbase) = " << sizeof(dbase);
		cout << "\n Непосредственная база: sizeof(fbase) = " << sizeof(fbase);
		cout << "\n  Производный класс: sizeof(top) = " << sizeof(top);
		
		cout << '\n';
		return 0;
	}
