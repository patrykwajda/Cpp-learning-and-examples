#include<iostream>

using namespace std;

int main()
{
	cout << "ile chcesz kolumn w tabliczce mnozenia?" << endl;
	int m,n;
	cin >> m;
	cout << "ile wierszy?" << endl;
	cin >> n;
	
	for(int i=1; i<=m ;i++)
	{
		for(int j=1; j<=n ;j++)
		{
		cout.width(5);
		cout << i*j << "  ";
		}
		cout << endl;
	}
	
	
}
