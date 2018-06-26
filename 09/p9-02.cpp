//p9-02.cpp - программа с классом "символьные строки"

#include "stroka.cpp"

int main()
{
	stroka LAT("Non Multa, Sed Multum! Non Multa, Sed Multum!");
	stroka RUS("Не много, но многое! Не много, но многое!йййq3333й1");
	
	//stroka CTP(20);
	
	LAT.display();
	cout << "\n В объекте LAT: " << LAT.string();
	
	cout << '\n';
	
	RUS.display();
	cout << "\n В объекте RUS: " << RUS.string();
	
	cout << '\n';
	
	//CTP.display();
	//cout << "\n В объекте CTP: " << CTP.string();
	
	cout << '\n';
	return 0;
}

