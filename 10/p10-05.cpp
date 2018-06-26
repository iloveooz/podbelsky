// p10-05.cpp - одинаковые функции в базовом и производном классах
#include <iostream>
#include "base.dir"

using std::cout;

int main() {
	base B, *bp = &B;
	dir D, *dp = &D;
	
	base *pdb = &D;
	
	bp->fun(1);
	dp->fun(5);
	
	pdb->fun(4);
	
	cout << '\n';
	return 0;
	
}

