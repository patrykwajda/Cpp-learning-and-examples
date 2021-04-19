#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
	public:
	int x;
	int y;
	
	void dodaj()
	{
		cout << "Dodawanie punktu. Podaj x i y: " << endl;
		cin >> x;
		cin >> y;
	}
	
	void pokaz()
	{
		cout << "Wspolrzedne wybranego punktu: (" << x << "," << y << ")" << endl; 
	}
	
	double odlegosc(Punkt p2)
	{
		float a = p2.x - x;
		float b = p2.y - y;
		float podst = pow(a,2) + pow(b,2);
		double odl = pow(podst,0.5);
		//cout << "Odlegosc pomiedzy punktami to: " << odl << endl;
		return odl;
	}
	
	void przesuniecie(Punkt p1, int a, int b)
	{
		p1.x += a;
		p1.y += b;
		cout << "Ten punkt przesuniety o Twoj wektor ma teraz wspolrzedne: (" << p1.x << "," << p1.y << ")" << endl;
	}
};

class Okrag
{
	public:
	Punkt p;
	float r;
	
	void utworz()
	{
		cout << "Nowy okrag. Podaj x,y oraz r: " << endl;
		p.dodaj();
		cin >> r;
	}
	
	void pokaz()
	{
		cout << "Twoj okrag: Srodek: ";
		p.pokaz();
		cout << "r: " << r << endl; 
	}
	
	void liczpole()
	{
		cout << "Pole kola: "<< 3.14*pow(r,2) << endl;
	}
	
	void wspolne(Okrag o1, Okrag o2)
	{
		if(o1.p.odlegosc(o2.p) == pow(pow(o1.r - o2.r,2),0.5) or o1.p.odlegosc(o2.p) == (o1.r+o2.r)) cout << "Okregi maja 1 p wspolny";
		else if(o1.p.odlegosc(o2.p) < pow(pow(o1.r - o2.r,2),0.5) or o1.p.odlegosc(o2.p) > (o1.r+o2.r)) cout << "Okregi maja 0 p wspolnych";
		else if(o1.p.x == o2.p.x and o1.p.y == o2.p.y and o1.r == o2.r)cout << "okregi sa wspolsrodkowe i maja oo p wspolych";
		else cout << "Okregi maja 2 p wspolne";		
	}	
};

int main()
{
	//punkt
	Punkt p1,p2;
	p1.dodaj();
	p1.pokaz();
	p2.dodaj();
	p2.pokaz();
	cout << "Odlegosc pomiedzy punktami to: " << p1.odlegosc(p2) << endl;
	
	int a = 0;
	int b = 0;
	cout << "podaj wektor przesuniecia punktu 1: ";
	cin >> a;
	cin >> b;
	
	p1.przesuniecie(p1, a, b);
	
	//okrag
	
	Okrag o1,o2;
	
	o1.utworz();
	o2.utworz();
	
	o1.pokaz();
	o2.pokaz();
	
	o1.liczpole();
	o2.liczpole();
	
	o1.wspolne(o1,o2);
	
	return 0;
}








