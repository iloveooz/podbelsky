//p2-03 - использование кодов символьных констант
#include <iostream>

using namespace std;

int main ()
{
cout << '\x0A' << '\x48' << '\x65' << '\x6C' << '\x6C';
cout << '\x6F' << '\x2C';
cout << '\40' << '\127' << '\157';
cout << '\162' << '\154' << '\144' << '\41';
cout << '\x0A' << '\x20' << '\x4F' << '\x5A' << '\132' << '\131';

cout << endl;

return 0;
}
