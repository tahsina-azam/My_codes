#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,p,count=0,fal;
	string s;
	s.reserve(1000);
	cin>>n;
	for(i=0;i<n;i++)
	{
		count=0;
		cin>>s;
		j=s.size();
		fal=j;
		if(j%2!=0)
	{
			cout<<"NO"<<endl;
	}
	else
	{
	for(p=0;p<j/2;p++)
	{
		if(s[p]=='(' && s[fal-1]==')')
		{
		count++;
	
		}
		 if(s[p]=='{' && s[fal-1]=='}')
		{
		count++;	
		}
		 if(s[p]=='[' && s[fal-1]==']')
		{
		count++;	
		}
		fal--;
	}
	if(count!=j/2)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	}
		
	}
	return 0;
}
