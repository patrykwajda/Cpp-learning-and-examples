#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	float a,b,c,delta,x1,x2;
	string war;
	do{
		cout << "podaj a:" << endl;
		cin >> a;
		cout << "podaj b:" << endl;
		cin >> b;
		cout << "podaj c:" << endl;
		cin >> c;
		
		delta = b*b - (4*a*c);
		if(delta > 0)
		{
			x1 = (-b + delta)/2*a;
			x2 = (-b - delta)/2*a;
			cout << "x1 = " << x1 << " a x2 = " << x2 << endl;
		}
		else if(delta == 0)
		{
			x1 = -b/2*a;
			cout << "x0 = " << x1 << endl;
		}
		else cout << "delta ujemna, brak rozwiazan w R!" << endl;
		
		do{
		cout << "czy chcesz liczyc jeszcze raz?(wpisz tak lub nie)" << endl;
		cin >> war;
		for(int i=0; i<war.length() ;i++)
		{
			war[i] = tolower(war[i]);
		}
		}while(war != "nie" and war != "tak");
		cout << endl << endl;
	}while(war!="nie");
	
	
}
