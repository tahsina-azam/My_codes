#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	int count=0;
	int dot=0;
	while(getline(cin,p))
	{
		for(int i=0;i<p.size();i++)
		{
			if(p[i]=='-' && count==0 && dot!=1)
			{
				cout<<".";
			}
			else if(p[i]=='-' && dot==1)
			{
				cout<<p[i];
			}
			else if(p[i]=='/')
			{
				cout<<p[i];
				count=1;
			}
			else if(p[i]=='>' && count==1)
			{
				cout<<p[i];
			}
			else if(p[i]=='>' && dot==1)
			{
				cout<<p[i];
			}
			else if(p[i]=='"')
			{
				if(dot==0)
				dot=1;
			else 
				dot==0;
				cout<<p[i]<<endl;
			}
			else if(p[i]!='>')
				cout<<p[i];
		}
		cout<<endl;
		count=0;
		}
		
return 0;
	}
