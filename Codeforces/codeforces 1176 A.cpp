#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int i,j,k,l,m,n,o,t;
	cin>>t;
	for(j=0;j<t;j++)
	{
	cin>>n;
	if(n==1)
	cout<<"0"<<endl;
	else
	for(i=0;;i++)
	{
		if(n%5==0)
		n=(n*4)/5;
		else if(n%3==0)
		n=(n*2)/3;
		else if(n%2==0)
		n=n/2;
		else
		{
			cout<<"-1"<<endl;
			break;
		}	
		if(n==1)
		{
			cout<<i+1<<endl;
			break;
		}
	}
	
	}
	return 0;
}
