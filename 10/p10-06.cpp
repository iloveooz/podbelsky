	// p10-06.cpp - виртуальная функция в базовом классе
	#include <iostream>

	using std::cout;

	struct base {
		virtual void vfun (int i) {
			cout << "\n base::i = " << i;
		}
	};

	struct dir1 : public base {
		void vfun (int i) {
			cout << "\n dir1::i = " << i; 
		}
	};

	struct dir2 : public base {
		void vfun (int i) {
			cout << "\n dir2::i = " << i; 
		}
	};

	int main() {
		base B, *bp = &B;
		dir1 D1, *dp1 = &D1;
		dir2 D2, *dp2 = &D2;
				
		bp->vfun(1);
		dp1->vfun(2);
		dp2->vfun(3);
		
		bp = &D1; bp->vfun(4);
		bp = &D2; bp->vfun(5);
		
		cout << '\n';
		return 0;
		
	}
