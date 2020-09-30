#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	stack<int> p;
	stack<int> t;
	vector<int> v;
	int i,j,k,l,m,n,count=0,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k==1)
		{
			cin>>j;
			s.push(j);
		}
		else if(k==2)
		{
		s.pop();
		}
		else
		{
			count++;
			l=s.top();
			q=s.size();
			for(m=0;m<q;m++)
			{
				if(s.top()>=l)
				{
					l=s.top();
					t.push(s.top());
				}
				p.push(s.top());
				s.pop();
			}
			s=p;
			v.push_back(t.top());
			
		}
		
	
			}
		for(m=0;m<count;m++)
		cout<<v[m]<<endl;
		return 0;
	
}
