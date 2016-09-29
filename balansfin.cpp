#include <iostream>
using namespace std;
#include <vector>

int main()
{
	int n,som,m,k,opgaves,opgave;
	
	vector<int>v;//vector v declareren of initializeren 
	cin>>opgaves;
	int testgewicht[opgaves];
	vector<int>u;
	for(int o = 0; o<opgaves ;o++)
	{
		
		do	{
			cin >> n;
		} while (!(n>=1 && n<=250));
		m=n;
		for (n ; n>0;n--)
		{
			do	{
			cin >> k;
			v.push_back(k);// getallen k toewijzen aan vector
		} while (!(n>0 && n<=1000));
		}
		vector<int> w (v);//aanmaken w die een kopie is van v
		cin >> testgewicht[o];
	 	opgave=0;
	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i) 
	{		
		for (vector<int>::iterator j = v.begin(); j != v.end(); ++j) 
		{
		if(*i == *j )
				{	
				}
				else if(*i != *j)
				{
					som=0;
					som = *i + *j;
					//cout<<endl<<som<<endl; DOE DE STREEPJES WEG OM TE ZIEN DAT DE SOM KLOPT!!!
					if(som == testgewicht[o])
					{
						opgave++;
					
						
					}
					
				
				}	
		}
		
	}
				
		if(opgave >0)
						{
						vector<int>uitkomst;
						u.push_back(1);	
						}
						
		else if(opgave <=0)
						{
						vector<int>uitkomst;
						u.push_back(0);		
						}	
		

		
	}
		vector<int>::iterator pop;
		for(pop=u.begin();pop!=u.end();++pop)
		cout<<*pop<<" ";
}
