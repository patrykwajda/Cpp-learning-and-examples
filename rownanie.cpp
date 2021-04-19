#include <iostream>			//Program rozwiazujacy wyrazenie pow(x,1/3) + x/y dla zestawu liczb
#include <fstream>
#include <math.h>

using namespace std;

class Rownanie
{
	public:
	float a;
	float b;
	float wynik;
	float tab[2][5];
	
	void wczytaj()
	{
		fstream file;
		file.open("dane.txt",ios_base::in);
		
		for(int i=0; i<5 ;i++)
		{
			for(int j=0; j<2 ;j++)
			{
				file >> tab[j][i];
				cout << tab[j][i] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	void oblicz()
	{
		fstream filet;
		filet.open("dane2.txt",ios_base::out);
		for(int j=0; j<5 ;j++)
		{
			if(tab[1][j] == 0){cout << "Zmien dane! Nie mozna dzielic przez zero!" << endl; filet << "Zmien dane! Nie mozna dzielic przez zero!" << endl;}
			else
			{
				a = pow(tab[0][j],1/3);
				b = ((tab[0][j])/tab[1][j]);
				
				wynik = a + b;
				cout << wynik << endl;
				filet << wynik << endl;
			}
		}
	}
	
	void oblicz(float x)
	{
		fstream filet1;
		filet1.open("dane3.txt",ios_base::out);
		for(int j=0; j<5 ;j++)
		{
			if(tab[1][j] == 0){cout << "Zmien dane! Nie mozna dzielic przez zero!" << endl; filet1 << "Zmien dane! Nie mozna dzielic przez zero!" << endl;}
			else
			{
				a = pow(tab[0][j],1/3);
				b = ((tab[0][j])/tab[1][j]);
		
				wynik = x*(a + b);
				cout << wynik << endl;
				filet1 << wynik << endl;
			}
		}
	}
	
};

int main() ///////////////////////////////////////////////////////////////////////////////////////////////////////
{
	cout << "Twoje dane z pliku dane.txt: "	<< endl;
	Rownanie r;
	r.wczytaj();
	
	cout << "Rozwiazania Twojego rownania na ekranie i w pliku dane2.txt: " << endl;
	r.oblicz();
	
	cout << "\nPrzez jaka liczbe chcesz pomnozyc rownanie? " << endl;
	float x;
	cin >> x;
	
	cout << "\nRozwiazania Twojego rowniania pomnozonego przez " << x << " na ekranie i w pliku dane3.txt: " << endl;
	r.oblicz(x);
	
	return 0;
}
