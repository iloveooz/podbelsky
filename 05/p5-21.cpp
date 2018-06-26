//p5-21.cpp - представление "дальних" (far) указателей
#include <iostream>
#include <dos>      // для макроса MK_FP()

using namespace std;

int main()
{
	void far *p0 = (void far *)0x417;
	
	void far *p1;
	p1 = MK_FP(0x410, 0x007);
	
	void far *p2;
	p2 = MK_FP(0x200, 0x217);

	cout << "\np0 = " << p0 << "  *(char *)p0 = " << *(char *)p0;
	cout << "\np1 = " << p1 << "  *(char *)p1 = " << *(char *)p1;
	cout << "\np2 = " << p2 << "  *(char *)p2 = " << *(char *)p2;
	return 0;
}
