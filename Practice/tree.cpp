#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,sum,count=0,q;
	vector<int> v;
	vector<int>p;
	vector<int> c;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j;
		v.push_back(j);
		cin>>k;
		p.push_back(k);
		cin>>q;
		c.push_back(q);
	}
	for(i=0;i<n-2;i++)
	{
		sum=0;
		for(j=i+1;j<n-1;j++)
		{
		if(c[i]==v[j])
		{
				if(c[i]!=c[j])
			sum++;
		}
		}
		count=count+sum;
	}
	cout<<count<<endl;
	return 0;
}
