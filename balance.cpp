#include <iostream>
using namespace std;

int balance(int gewicht);

int main()
{
	int n,heavy;
	do {
		cout<<"Hoeveel opgaven zou je willen?"<<endl;
		cin>>n;
	} while (!(n>=1 && n<=250));
	for (n ; n>0;n--)
	{
		balance(heavy);
	}
}

int balance(int gewicht)
{
	
}	
