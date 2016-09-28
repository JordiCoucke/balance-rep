#include <iostream>

using namespace std;
#include <vector>

int main()
{
	int n,som,m,k,opgaves,opgave;
	
	vector<int>v;//vector v declareren of initializeren 
	cin>>opgaves;
	int testgewicht[opgaves];
	vector<int>uitkomst(opgaves);
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
						v.push_back(0);	
						}
						
		if(opgave <=0)
						{
						vector<int>uitkomst;
						v.push_back(1);		
						}	
		

		
	}

	for(int o = 0; o<opgaves ;o++)
	{
		vector<int>::iterator pop;
		for(pop=v.begin();pop!=v.end();++pop)
		if(*pop<=1)
		{	
		cout<<"neen";
		break;
		}
		else 
		if(*pop>0)
		{	
		cout<<"ja";
		break;
		}
	}
}
					
		
