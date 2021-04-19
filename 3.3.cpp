#include <iostream>
#include <fstream>
#include <math.h>

int tab[10] = {0};
int i = 0;

float suma(int tab[]);
float sgeo(int tab[]);
float saryt(float wynik);

using namespace std;

int main()
{
	fstream plik("dane2.txt");
	
	while(plik >> tab[i]){i++;}
	
	float (*wsksuma)(int tab[]);
	wsksuma = suma;
	cout << "suma: " << wsksuma(tab) << endl;
	
	float (*wskaryt)(float wynik);
	wskaryt = saryt;
	
	float wynik = wsksuma(tab);
	
	cout << "srednia aryt: " << wskaryt(wynik) << endl;
	
	wsksuma = sgeo;
	
	cout << "srednia geo: " << wsksuma(tab);

	return 0;
}



float suma(int tab[10])
{
	int wynik = 0;
	for(int j = 0; j<10 ;j++)wynik += tab[j];
	return wynik;
}

float saryt(float wynik)
{
	return wynik/10;
}

float sgeo(int tab[10])
{
	int mnoz = 1;
	for(int j=0; j<10 ;j++)mnoz *= tab[j];
	return pow(mnoz,0.1);
}



