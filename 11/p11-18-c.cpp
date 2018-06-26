	
	

	#include <stdlib.h>
	#include <fstream>
	#include <iostream>

	using namespace std;

	
		void errorF(char *ss) { 
			cerr << "\n Ошибка при открытии файла " << ss << '\n';
			exit(1);
		}
	
	
		const int lenName = 23;
	 
	int main() {
		
			char progName[lenName]; 
		
			cout << "\n Введите полное имя анализируемой программы: ";
			cin >> progName;
		
		
			ifstream inFile; 
		
		
			inFile.open(progName);
		
		if (!inFile) errorF(progName);
		
		
			char simb, last, next; 
		
		
			ofstream outtext, outcom; 
		
		
			int len = 0;
		
			outtext.open("p11-18-c.cpp",ios::ate);
				if (!outtext) errorF("p11-18-c.cpp");
		
			outcom.open("comment.txt",ios::ate);
				if (!outcom) errorF("comment.txt");
		
		
			while (inFile.get(simb)) {
				
				len++; 
				
				
				if (simb == '\n') len = 0; 
				
				
				if (simb != '/') 
					
					outtext.put(simb);
				else {
					
					
					if (!inFile.get(next)) break;
					if (next == '/') {
						
						if (len != 1)
							
							outtext.put('\n');
						outcom.put(simb);
						outcom.put(next);
						
						do {
							
							inFile.get(simb);
							
							outcom.put(simb);
							} 
						while (simb != '\n');
					}
					else {
						
						outtext.put(simb);
						outtext.put(next);
					}
				}
			}
	}
