#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l=0,m,n,q;
	vector<int> v;
	vector<int> g;
	set<int> s;
	set<int>::iterator it;
	set<int> p;
	set<int>::iterator pt;
	cin>>n>>m;
	if(n>m)
	{
		cout<<"0"<<endl;
		return 0;
	}
	for(i=0;i<m;i++)
	{
		cin>>k;
		v.push_back(k);
		s.insert(k);
	}
	j=s.size();
	if(n-j!=0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	/*k=1;
	for(it=s.begin();it!=s.end();it++)
	{
		l=0;
	if(*it==k)
	{
		l=1;
		k++;
		}
		if(l!=1)
		{
			cout<<"0"<<endl;
			return 0;
		}
			
	}*/
	
	for(it=s.begin();it!=s.end();it++)
	{
		q=0;
		for(i=0;i<=m;i++)
		{
			if(*it==v[i])
		     q++;	
		}
		p.insert(q);
	}
	
	pt=p.begin();
	cout<<*pt<<endl;
	return 0;
	
}
