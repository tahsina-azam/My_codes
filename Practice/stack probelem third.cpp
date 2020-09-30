#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,p,flag,b,count1=0,count2=0;
	stack<char> t;
	string s;
	s.reserve(1000);
   cin>>n;
   for(p=0;p<n;p++)
   {
   	count1=0;
   	count2=0;
   	flag=0;
   		cin>>s;
	l=s.size();
	for(i=0;i<l;i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			count1++;
			t.push(s[i]);
		}
		else if(s[i]==')')
		{
			count2++;
			b=t.size();
			if(b==0)
			{
			cout<<"NO"<<endl;
			flag=1;
			break;
			}
			else if(t.top()!='(')
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
			count2++;
			b=t.size();
			if(b==0)
			{
			cout<<"NO"<<endl;
			flag=1;	
				break;
			}
			else if(t.top()!='{')
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
			count2++;
			b=t.size();
			if(b==0)
			{
				cout<<"NO"<<endl;
				flag=1;
					break;
			}
			else if(t.top()!='[')
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
	if(count1==count2 && flag==0)
{
		cout<<"YES"<<endl;
}
	if(count1!=count2 && flag==0)
	cout<<"NO"<<endl;
	
		s.clear();
		while(!t.empty())
		t.pop();
   }
	return 0;
}
