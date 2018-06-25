//p2-11.cpp - операции отношения и логические операции
#include <iostream>

using namespace std;

int main()
{ cout << "\n3<5 PABHO " << (3<5);
  if ((3<5)==1) {cout << " AMuHb!";} else {cout << " Ложь!!!";};
  cout << "\n3>5 PABHO " << (3>5);
  if ((3>5)==1) {cout << " AMuHb!";} else {cout << " Ложь!!!";};;
  cout << "\n3==5 PABHO " << (3==5);
  if ((3==5)==1) {cout << " AMuHb!";} else {cout << " Ложь!!!";};;
  cout << "\n3!=5 PABHO " << (3!=5);
  if ((3!=5)==1) {cout << " AMuHb!";} else {cout << " Ложь!!!";};;
  cout << "\n3!=5 || 3==5 PABHO " << (3!=5||3==5);
  if ((3!=5||3==5)==1) {cout << " AMuHb!";} else {cout << " Ложь!!!";};;
  cout << "\n3+4>5 && 3+5>4 && 4+5>3 PABHO " << (3+4>5 && 3+5>4 && 4+5>3);
  if ((3+4>5 && 3+5>4 && 4+5>3)==1) {cout << " AMuHb!";} else {cout << " Ложь!!!";};;
	cout << endl;
	return 0;
}
