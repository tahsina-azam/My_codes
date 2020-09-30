#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,l,m,count=0,counter=0;
	string s;
	string p;
	s.reserve(1000000);
	p.reserve(1000000);
	cin>>n;
	cin>>s;
	p=s;
	for(i=0;i<n-1;i++)
	{
		if(s[i]=='r')
		{
			if(s[i+1]!='b')
			{
				count++;
				if(s[i+2]=='b')
				{
					s[i+1]='b';
					s[i+2]='r';
					
				}
				else
				{
					s[i+1]='b';	
				}
			}
		}
			if(s[i]=='b')
			{
			if(s[i+1]!='r')
			{
				count++;
				if(s[i+2]=='r')
				{
					s[i+1]='r';
					s[i+2]='b';
					
					
				}
				else
				{
					s[i+1]='r';
				}	
			}
		}
		
	}
		for(i=n-1;i>0;i--)
	{
		if(p[i]=='r')
		{
			if(p[i-1]!='b')
			{
				counter++;
				if(p[i-2]=='b')
				{
					p[i-1]='b';
					p[i-2]='r';
					
				}
				else
				{
					p[i-1]='b';	
				}
			}
		}
			if(p[i]=='b')
			{
			if(p[i-1]!='r')
			{
				counter++;
				if(p[i-2]=='r')
				{
					p[i-1]='r';
					p[i-2]='b';
					
					
				}
				else
				{
					p[i-1]='r';
				}	
			}
		}
		
	}
	
	for(i=0;i<n;i++)
	cout<<s[i]<<endl;
	cout<<p<<endl;
	cout<<count<<endl;
	cout<<counter<<endl;
	return 0;
	
}

