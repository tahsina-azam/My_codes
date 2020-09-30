#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l;
	unsigned long long m,n,p;
	cin>>n>>m;
	vector<unsigned long long> v;
	v.push_back(1);
	v.push_back(1);
	for(i=2;i<=n;i++)
	{
		j=v[i-1]+v[i-2];
		v.push_back(j);
	}
	p=m%v[n];
	cout<<p<<endl;
	return 0;
}
