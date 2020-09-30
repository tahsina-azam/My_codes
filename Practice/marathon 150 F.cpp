#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,i,j,k,l,count;
	string s;
vector<int> v;
	cin>>t;
	for(i=0;i<t;i++)
	{
		count=0;
	cin>>n>>m;
		cout<<"Case 1: "<<endl;
	for(j=0;j<m;j++)
	{
		cin>>s;
		if(s=="pushLeft")
		{
			cin>>k;
			if(count<n)
			{
				cout<<"Pushed in left: "<<k<<endl;
				count++;
			v.insert(v.begin(),k);
			}
		
		}
		
		else if(s=="pushRight")
		{
			cin>>k;
			if(count<n)
			{
				cout<<"Pushed in right: "<<k<<endl;
				count++;
				l=0;
				v.push_back(k);
			}
		
		}
		
	else if(s=="popLeft")
	{
	if(count!=0)
	{
		cout<<"Popped from left: "<<v.front()<<endl;
			count--;
			l=0;
			v.erase(v.begin());
			
		}	
	
	}
	else if(s=="popRight")
		{
				if(count!=0)
	{
		cout<<"Popped from right: "<<v.back()<<endl;
			count--;
			l=0;
			v.pop_back();
		}	
	}

	if(l==0 && count==0)
	{
		cout<<"The queue is empty"<<endl;
		l=1;
	}
	if(l==0 && count==n)
	{
	cout<<"The queue is full"<<endl;
	l=1;	
	}
	s.clear();
}
	}
	return 0;
}
