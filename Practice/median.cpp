#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int i,j,k,l,n,m;
	unsigned long long p;
	while(!cin.eof())
	{
		cin>>n;
		v.push_back(n);
		m=v.size();
		if(m==1)
		{
			cout<<v[0]<<"\n"<<endl;
		}
		else if(m%2==0)
		{
			p=m/2;
		sort(v.begin(),v.end());
		k=(v[p-1]+v[p])/2;
		cout<<k<<"\n"<<endl;
		}
		else
		{
			p=(m+1)/2;
		sort(v.begin(),v.end());
		cout<<v[p-1]<<"\n"<<endl;	
		}
		
	}
	return 0;
}
