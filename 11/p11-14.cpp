//p11-14.cpp — вывод в строковый поток операцией <<
#include <strstream>
#include <iostream>

using namespace std;

int main() {
	char buffer[180];
	
	ostrstream outstring(buffer, sizeof(buffer), ios::out | ios::ate);
	
	outstring << "Без явного включения разделителей " << "текст в потоке\n\"сливается\":\n";
	
	outstring << 123456789 << -456 << +1.23456789;
	outstring << -0.123456789e+1 << +123.456789e-3 << ends;
	
	cout << "\n" << buffer << endl;
	return 0;
}
