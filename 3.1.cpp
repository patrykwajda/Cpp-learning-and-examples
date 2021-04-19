#include <iostream>
#include <math.h>

using namespace std;

float a,n;

float pierw(float a)
{
	return pow(a,(0.5));
}

float pierw(float a, float n)
{
	return pow(a,(1/n));
}

int main()
{
	cout << "Podaj liczbe a i stopien pierwiastka n: " << endl;
	cout << "Podaj a: ";
	cin >> a;
	
	cout << "Podaj n: ";
	cin >> n;
	
	cout << endl << "Pierwiastek kwadratowy Twojej liczby to: " << pierw(a) << endl;
	cout << "Pierwiastek n-tego stopnia Twojej liczby to: " << pierw(a,n);
	
		
	return 0;
}
