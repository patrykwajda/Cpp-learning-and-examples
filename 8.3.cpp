#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	string cyfry = "0123456789";
	string samogloski = "aeuioy";
	string spolgloski = "qwrtpsdfghjklzxcvbnm";
	string spec = "`@#$%^&*";
	int n;
	
	cout << "Jak dlugie ma byc haslo? Podaj liczbe:(min 4) " << endl;
	cin >> n; 
	
	string haslo = "";
	string los;
	int d1 = sizeof(cyfry);
	int d2 = sizeof(samogloski);
	int d3 = sizeof(spolgloski);
	int d4 = sizeof(spec);
	int i = 0;
	
	while(i < n)
	{
	los = cyfry[rand()%(d1-1)];
	haslo += los; i++; Sleep(50); //Odczekanie ze wzglêdu na zasadê dzia³ania generatora liczb pseudolosowych
	if(i == n)break;
	los = toupper(spolgloski[rand()%(d2-1)]);
	haslo += los; i++; Sleep(50); 
	if(i == n)break;
	los = samogloski[rand()%(d3-1)];
	haslo += los; i++; Sleep(50); 
	if(i == n)break;
	los = spec[rand()%(d4-1)];
	haslo += los; i++; Sleep(50); 
	};
	
	cout << endl << "Twoje haslo: " << haslo << endl;
	
	
	return 0;
}
