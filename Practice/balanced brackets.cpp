#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,p,flag;
	stack<char> t;
	string s;
	s.reserve(100000);
   cin>>n;
   for(p=0;p<n;p++)
   {
   	flag=0;
   		cin>>s;
	l=s.size();
		if(s[0]=='}' || s[0]==')' || s[0]==']')
		{
			cout<<"NO"<<endl;	
		}
		
		else
		{
			for(i=0;i<l;i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			t.push(s[i]);
		}
		else if(s[i]==')')
		{
			if(t.top()!='(')
			{
				flag=1;
				cout<<"NO"<<endl;
			break;
			}
			else
			{
				t.pop();
			}
		}
		else if(s[i]=='}')
		{
			if(t.top()!='{')
			{
				flag=1;
				cout<<"NO"<<endl;
				break;	
			}
			else
			{
				t.pop();
			}
		}
		else
		{
			if(t.top()!='[')
			{
				flag=1;
				cout<<"NO"<<endl;
				break;	
			}
			else
			{
				t.pop();
			}	
		}
	}
	if(flag==0)
	cout<<"YES"<<endl;
	
		s.clear();
		while(!t.empty())
		t.pop();
		}
   }
	return 0;
}
