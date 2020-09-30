#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k;
	string a;
	a.reserve(1000);
	long long int b,c,sum=0,mod=0,val;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		cin>>b;
		j=0;
		if(a[0]=='-')
		j=1;
	c=a.size();
	for(k=j;k<c;k++)
	{
		val=a[k]-48;
		sum+=val;
		mod=sum%b;
		sum=mod*10;
		}
		if(mod==0)cout<<"Case "<<i+1<<": divisible"	<<endl;
		else cout<<"Case "<<i+1<<": not divisible"	<<endl;
	}
	return 0;
}
