
#include <iostream>
using namespace std;

int balance(int gewicht,int& hoeveelheid);

int main()
{
	int n,heavy;
	do {
		cout<<"Hoeveel opgaven zou je willen?"<<endl;
		cin>>n;
	} while (!(n>=1 && n<=250));
	cout<<"Geef deze een waarde."<<endl;
	for (n ; n>0;n--)
	{
		balance(heavy,n);
	}
}

int balance(int gewicht,int& hoeveelheid)
{
	int t=0;
	for(t;t<=hoeveelheid;t++)
	{
		cin>>gewicht;
		return gewicht;
	}
	
}	

