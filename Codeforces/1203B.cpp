#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long int i,j,k,l,m,n,o,count,p;
	vector<int> v;
	vector<int> s;
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>k;
		for(i=0;i<4*k;i++)
		{
			cin>>o;
			v.push_back(o);
		}
		sort(v.begin(),v.end(),greater<int>());
		m=(4*k)-1;
		p=v[0]*v[m];
		count=0;
	for(i=0;i<2*k;i++)
	{
		if(v[i]*v[m]!=p)
	{
		count=1;
		break;
	}
	m--;
	}
	if(count==1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	v.clear();
	s.clear();
	}
	return 0;
}
