#include <iostream>
using namespace std;
class Dana
{
	public:
	float x;
	virtual bool isvalid(){ }
	virtual get(){ }
};
 
class Bok:public Dana
{
	public:
	bool isvalid(float t)
	{ 
		if(t>0) return true;
		else return false;
	}
	Bok(float ax)
	{   
		x = ax;
		while(!isvalid(ax))
		{
			cout << "Nieprawidlowa dana, podaj x dodatnie "; 
			cin >> ax; 
		}   
		x = ax;
	}
	get()
	{ 
		cout << "Bok o dlugosci: " << x;
	}
};

class Kat:public Dana
{
	public:
	bool isvalid(float c)
	{
		if(c >= 0 && c <= 360)return true; 
		else return false;
	}
	Kat(float ax)
	{ 
		x = ax;
		while(!isvalid(ax))
		{
			cout << "Nieprawidlowa dana, podaj x z przedzialu 0-360 "; 
			cin >> ax;  
		}   
		x = ax;		
	}
	get(){ cout<<"Kat o mierze: "<<x;}
};


int main()
{
	cout << "Podaj dlugosc boku - liczba dodatnia" << endl;
	float a,b;
	cin >> a;
	Bok jeden(a);
	jeden.get();
	cout<<endl;
	cout<<"Podaj miare kata - liczba z przedzialu 0-360"<<endl;
	cin>>b;
	Kat dwa(b);
	dwa.get();
	
	return 0;
}



