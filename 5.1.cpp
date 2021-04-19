#include <iostream>

using namespace std;

class Figura
{
	public:
	float a,b; string c;
	virtual float pole() { cout<<"Nieokreslona figura - brak pola"; }
	virtual float obwod() { cout<<"nieokreslona figura - brak obwodu"; }
	virtual void info() { cout<<"Jestem nieokreslona figura"; }
	virtual string baza() { return "figury"; }
};

class Kwadrat:public Figura
{
	public:
	Kwadrat(float x) { a = x; }
	virtual float pole() { return a*a; }
	virtual float obwod() { return 4*a; }
	virtual void info() { cout << "Ten obiekt to kwadrat o boku: " << a << ", polu: " << pole() << " i obwodzie: " << obwod() << endl; }
	virtual string baza() { return "kwadratu"; }
};

class Prostokat:public Figura{
	public:
	Prostokat(float x, float y) { a = x; b = y; }
	virtual float pole() { return a*b; }
	virtual float obwod() { return 2*a+2*b; }
	virtual void info() { cout << "Ten obiekt to prostokat o bokach: " << a << 'x' << b << ", polu: " << pole() << " i obwodzie: " << obwod() << endl; }
	virtual string baza() { return "prostokata"; }
};

class Kolo:public Figura
{
	public:
	Kolo(float x) { a = x; }
	virtual float pole() { return 3.14*a*a; }
	virtual float obwod() { return 3.14*2*a; }
	virtual void info() { cout << "Ten obiekt to kolo o promieniu: " << a << ", polu: " << pole() << " i obwodzie: " << obwod() << endl; }
	virtual string baza() { return "kola"; }
};

class Przestrzen: public Figura
{
	public:
	void wczytaj(float pp, float h, string baza)
	{
		a = pp;
		b = h;
		c = baza;
	}
	float objetosc()
	{
		return a*b;
	}
	void info() { cout << "Jestem figura przestrzenna na bazie stworzonego przez Ciebie " << c << " o objetosci: " << objetosc(); }
};

int main()
{
	float q,w,e,r,h;
	cout << "Bok kwadratu: "; cin >> q;
	Kwadrat jeden(q);
	jeden.info();
	cout << "Boki prostokata: "; cin >> w >> e;
	Prostokat dwa(w,e);
	dwa.info();
	cout << "Promien kola: "; cin >> r;
	Kolo trzy(r);
	trzy.info();
	cout << "O jakiej podstawie chcesz objetosc? wpisz liczbe: 1 - kwadrat, 2 - prostokat, 3 - kolo " << endl;
	int wyb;
	while(wyb != 1 and wyb != 2 and wyb != 3)
	{
		cin >> wyb;
		cout << "Wpisz poprawny wybor!" << endl;
	}
	cout << "Jaka wysokosc bryly? " << endl;
	cin >> h;
	Przestrzen cztery;
	switch(wyb)
	{
		case 1: cztery.wczytaj(jeden.pole(),h, jeden.baza()); break;
		case 2: cztery.wczytaj(dwa.pole(),h, dwa.baza()); break;
		case 3: cztery.wczytaj(trzy.pole(),h, trzy.baza()); break;
	}
	cztery.info();
}
