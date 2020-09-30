#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	long long m;
	cin>>t;

	for(i=0;i<t;i++)
	{
		cin>>m;
		if(m-30==14)
		{
			if(m>31)
			{
				cout<<"YES"<<endl;
				cout<<"15 10 6 "<<(m-31)<<endl;
			}
			else 
			{
				cout<<"NO"<<endl;
			}

		}
		else if(m-30==6)
			{
			if(m>31)
			{
				cout<<"YES"<<endl;
				cout<<"6 10 15 "<<(m-31)<<endl;
			}
			else 
			{
				cout<<"NO"<<endl;
			}

		}
		else if(m-30==10)
			{
			if(m>31)
			{
				cout<<"YES"<<endl;
				cout<<"10 6 15 "<<(m-31)<<endl;
			}
			else 
			{
				cout<<"NO"<<endl;
			}

		}
		else if(m>30) 
		{
			
			cout<<"YES"<<endl;
		    cout<<"14 10 6 "<<(m-30)<<endl;
			
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}