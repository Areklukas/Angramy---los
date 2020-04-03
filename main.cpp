#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;

class ang
	{
       	ifstream plik1;
       	ofstream plik2;
		public:
        ang();
        void wczytaj();     
		string stringSort(string s);  
	};
ang::ang()
	{ 
    	plik1.open("c:\\jeden.txt");
    	plik2.open("c:\\dwa.txt");
	}
void ang::wczytaj()	
	{
		string slowo;
		int i=0;
		plik2<<"| ";
	
		while(!plik1.eof())
			{ 
        		plik1>>slowo;
				sort[i]=stringSort(slowo) i++;
				cout<<sort[i]<<endl;
			}
	}	
string ang::stringSort(string s)
	{
		int t[100]; 
		string wynik;
		for (int i=0; i<=100; i++)
        t[i]=0;
		int random = rand()% s.length() + 1;
		return wynik;
	}
slowo::~ang()
	{
    	plik1.close();
    	plik2.close();
	}
int main(int argc, char** argv) 
{
	ang slowo; 
    slowo.wczytaj();
	
	return 0;
}
