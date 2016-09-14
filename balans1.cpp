

#include <iostream>
using namespace std;



int main()
{
	int n,heavy,testgewicht,opgaves,m;
	cin>>opgaves;
	for(int o;o<opgaves;o++)
	{
	cin>>testgewicht;
	do	{
		cin>>n;
		} 
	while (!(n>=1 && n<=250));
	m=n;
	int a[n];
	for (n ; n>0;n--)
	{
		cin>> a[n];
	}
	for(int i=0; i <=m; i++)
	{
		for(int b=0; b <=m; b++)
		{
			if(i == b)
			{	
			}
			if(b>i)
			{
			}
			else if(i != b)
			{
				int som=0;
				som = a[i] + a[b];
				if(som == testgewicht)
				{
					cout << "ja" <<endl;
					break;
				}

			}
			
		}
	
	}
	}
}


