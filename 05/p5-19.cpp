//p5-19.cpp - выделение и освобождение памяти для массива
#include <iostream>

using namespace std;

int main()
{
	long (*lp) [2] [4];
	lp = new long [3] [2] [4];

	cout << "Память выделена\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "\n";
		for (int j = 0; j < 2; j++)
			for ( int k = 0; k < 4; k++)
				{
					lp[i][j][k] = i + j + k;
					cout << '\t' << lp[i][j][k];
				}
	}

	delete [] lp;

	cout << "\nПамять освобождена" << endl;
	return 0;
}
