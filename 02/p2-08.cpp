//p2-08.cpp - длины строк символьных констант (литер)
#include <iostream>

using namespace std;

int main()
{ 
	cout << "\nsizeof \"\" = " << sizeof "";
	cout << "\nsizeof \'A\' = " << sizeof 'A';
	cout << "\tsizeof \"A\" = " << sizeof "A";
	cout << "\nsizeof \'\\n\' = " << sizeof '\n';
	cout << "\tsizeof \"\\n\" = " << sizeof "\n";
	cout << "\nsizeof \'\\xFF\' = " << sizeof '\xFF';
	cout << "\tsizeof \"\\xFF\" = " << sizeof "\xFF";
	cout << endl;
	return 0;
}
