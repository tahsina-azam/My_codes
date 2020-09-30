#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,count,p;
	vector<int> v;
	vector<int> s;
	int n,m,T;
	cin>>T;
	for(i=0;i<T;i++)
	{
		count=0;
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>k;
			v.push_back(k);
		}
		l=0;
		k=0;
	for(j=0; ;j=j+v[j])
	{
	l=l+v[j];
	if(j>n-1)
	break;
	k=k+v[j];
	count++;
	}
	p=n-(k+1);
		cout<<l-(v[j]-p)<<endl;
		v.clear();
		s.clear();
	}
	return 0;
}
