//p2-04 - длины внутренних представлений символьных констант
#include <iostream>

using std::cout;
using std::endl;

int main()
{
cout << "\n Длины символьных  ( литерных ) констант ( в байтах ):";

cout << "\nsizeof \'z\' = " << sizeof 'z';
cout << "\nsizeof \'\\n\' = " << sizeof '\n';
cout << "\nsizeof \'\\n\\t\' = " << sizeof '\n\t';
cout << "\nsizeof \'\\x07\\x07\' = " << sizeof '\x07\x07';
cout << "\nsizeof \'\\x0004f\' = "<< sizeof '\x0004F';

cout << "\nsizeof \'\\x4f\' = " << sizeof '\x4f';
cout << "\nsizeof \'\\111\' = " << sizeof '\111';
cout << "\n Десятичное значение кода символа \'\\x0004f\' = " << (int)'\x0004f';
cout << "\n Десятичное значение кода символа \'\\x4F\' = " << (int)'\x4f';
cout << "\n Десятичное значение кода символа пробела = " << (int)' ';
cout << endl;
return 0;
}
