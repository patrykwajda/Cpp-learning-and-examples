#include <iostream>
#include <fstream>

using namespace std;

float carrot[3][3] = {0};
float carrots[3][3] = {0};
float s,x;

void data();
float sumadiag(float carrot[3][3]);
void skalar(float carrot[3][3], float s);
void square(float carrots[3][3], float carrot[3][3]);

int main() //////////////////////////////////////////////////////////////////////////////
{
	cout << "Twoja macierz (plik dane) to: " << endl;
	data();
	
	cout << "Suma na diagonali: " << sumadiag(carrot) << endl;
	
	cout << "Przez jaka liczbe chcesz pomnozyc macierz: ... ";
	cin >> s;
	cout << "Macierz razy liczba: " << endl;
	skalar(carrot,s);
	cout << "macierz przez sama siebie: " << endl;
	square(carrots ,carrot);
	
	
	return 0;
}  //////////////////////////////////////////////////////////////////////////////////////

void data()
{
	fstream file;
	file.open("dane.txt");
	
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			file >> carrot[i][j];
		}
	}
	
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout << carrot[i][j] << " ";
		}
		cout << endl;
	}
	
	file.close();
}

float sumadiag(float carrot[3][3])
{
	return carrot[0][0] + carrot[1][1] + carrot[2][2];
}

void skalar(float carrot[3][3], float s)
{
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			carrot[i][j] *= s;
		}
	}
	
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout << carrot[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			carrot[i][j] /= s;
		}
	}
}

void square(float carrots[3][3], float carrot[3][3])
{
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			x = 0;
			for(int z=0; z<3 ;z++)
			{
				x += carrot[i][z] * carrot[z][j];
			}
			carrots[i][j] = x;
		}
	}
	
	for(int i=0; i<3 ;i++)
	{
		for(int j=0; j<3 ;j++)
		{
			cout << carrots[i][j] << " ";
		}
		cout << endl;
	}
}








