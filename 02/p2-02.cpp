//p2-02 - размеры памяти для вещественных констант

# include <iostream>

using namespace std;

int main ()

{
int chislo = 25;
cout << "\n sizeof 3.141592653589793 = ";
cout << sizeof 3.141592653589793;
cout << "\n sizeof 3.14159 = " << sizeof 3.14159;
cout << "\n sizeof 3.14159f = " << sizeof 3.14159f;
cout << "\n sizeof 3.14159L = " << sizeof 3.14159L;

enum chislo {zero = 5, one, two, three, four = two * 4};

cout <<"\n" << zero << " " <<one <<" " << two << " " <<three <<" " << four;
chislo = chislo * 4;
cout <<"\n" << zero << " " <<one <<" " << two << " " <<three <<" " << four;

return 0;

}
