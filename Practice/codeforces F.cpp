#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n,x,y;
	double m;
	vector<double> v;
	vector<double> v1;
	set<double> s;
	set<double>::iterator it;
	cin>>n>>x>>y;
	
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back(j);
		v1.push_back(k);
	}
	for(i=0;i<n;i++)
	{
		if(x-v[i]==0)
		m=9633;
		else
	m=(y-v1[i])/(x-v[i]);
	
	s.insert(m);		
	}
	
	j=s.size();
	cout<<j<<endl;
	
	return 0;
	
}
