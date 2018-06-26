//p4-03.cpp - вложение циклов
#include <iostream>

using namespace std;

int main(void)
{ 
	for (int i = 0; i < 3; i++)
	{ 
		cout << "\nДо цикла: i = " << i;
		cout << ", Вложенный цикл";
		
		for (int i = 6; i > 3; i--) cout << " i = " << i;
    
		
			cout <<".\n После: i = " << i << "." << endl;
		
	
	}  
return 0;
}
