

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	int n,testgewicht,opgaves,m;
	cin>>opgaves;
	for(int o;o<opgaves;o++)
	{
		int uitkomst=0;
		cin>>testgewicht;
		do	{
			cin>>n;
		} while (!(n>=1 && n<=250));
		m=n;
		int a[n];
		for (n ; n>0;n--)
		{
			cin>> a[n];
		}
		for(int i=0; i <m; i++)
		{
			for(int b=0; b <m; b++)
			{
				if(i == b)
				{	
				}else if(i != b)
				{
					int som=0;
					som = a[i] + a[b];
					if(som == testgewicht)
					{
						uitkomst++;
					}
				}
			}
		}
		if(uitkomst >0){
			cout << "ja"<<endl<<endl;
		}else{
			cout << "nee"<<endl<<endl;
		}
	}
}


