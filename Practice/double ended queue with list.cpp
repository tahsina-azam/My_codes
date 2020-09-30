#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,t,count,tt;
	list<int> q;
	string s;
	s.reserve(20);
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		cout<<"Case "<<i+1<<":"<<endl;
		for(j=0;j<m;j++)
		{
		cin>>s;
		if(s=="pushLeft" || s=="pushRight")
		{
			cin>>k;
			if(q.size()==n)
			cout<<"The queue is full"<<endl;
		else
		{
				 if(s=="pushLeft")
			{
				cout<<"Pushed in left: "<<k<<endl;
				q.push_front(k);
			}
			else
			{
				cout<<"Pushed in right: "<<k<<endl;
				q.push_back(k);
			}
		}
		}
		else
		{
			if(s=="popLeft" || s=="popRight")
			{
				if(q.size()==0)
				cout<<"The queue is empty"<<endl;
				else
				{
					 if(s=="popLeft")
				{
					cout<<"Popped from left: "<<q.front()<<endl;
					q.pop_front();
				}
				else
				{
					cout<<"Popped from right: "<<q.back()<<endl;
					q.pop_back();
				}
				}
			}
		}
	}
}
	return 0;
}
