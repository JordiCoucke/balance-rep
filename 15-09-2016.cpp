
#include <iostream>

using namespace std;

int main()
{
	int n,opgaves,m,som;
	cin>>opgaves;
	int testgewicht[opgaves],uitkomst[opgaves];
	for(int o = 0; o<opgaves ;o++)
	{
		do	{
			cin >> n;
		} while (!(n>=1 && n<=250));
		m=n;
		int t[n];
		for (n ; n>0;n--)
		{
			do	{
			cin >> t[n];
		} while (!(t[n]>=1 && t[n]<=1000));
		}
		cin >> testgewicht[o];
		for(int i=0; i < m; i++)
		{
			for(int b=0; b <m; b++)
			{
				if(i == b || t[i] < 1 || t[b] < 1)
				{	
				}else if(i != b)
				{
					som=0;
					som = t[i] + t[b];
					if(som == testgewicht[o])
					{
						uitkomst[o]++;
						
					}
				}
			}
		}

	}
	
	
	
	
	
	
	
	for(int o = 0;o<opgaves;o++)
	{
		if(uitkomst[o] >0){
			cout << testgewicht[o] << " JA" << uitkomst[o] << endl;
		}else{
			cout << testgewicht[o] << " NEEN" << endl;
		}
		
	}
}



