#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,t;
	string p;
	p.reserve(1000);
	cin>>n>>t;
	
	for(i=0;i<n;i++)
cin>>p[i];

for(j=0;j<t;j++)
{
		for(i=0;i<n;i++)
	{
		if(p[i]=='B' && p[i+1]=='G')
		{
			p[i]='G';
			p[i+1]='B';
			i++;
		}
	}
}

for(i=0;i<n;i++)
cout<<p[i];
	
	return 0;
	
}
