#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	p.reserve(200);
	int i,j,k=0,l=0,m=0,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		if(p[i]=='?')
		m++;
	}
	
	for(i=0;i<n;i++)
	{
	if(p[i]==p[i+1] && p[i]!='?')
{
		cout<<"NO"<<endl;
		l=1;	
		return 0;
}
	}
	if(p[0]=='?' && p[n-1]=='?')
	cout<<"YES"<<endl;
	else
	{
		for(i=1;i<n-1;i++)
	
{
	if(p[i]=='?')
	if(p[i-1]!=p[i+1] && p[i-1]!='?' && p[i+1]!='?')
    l++;
	}
	if(l==m)
	cout<<"NO";
	else
	cout<<"YES";
	}
return 0;
	
	
}
