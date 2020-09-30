#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n,i,k,a,Max=0;
	map<unsigned long long, std::vector<unsigned long long> > v;
	std::vector<unsigned long long> ins;

	cin>>n;
	for( i=0;i<n;i++)
	{
		cin>>a;
		v[a].push_back(i);
	}
	for(auto const &kv : v)
	{
	    ins=kv.second;
		Max=Max>(ins[ins.size()-1]-ins[0])?Max:(ins[ins.size()-1]-ins[0]);
	}

	cout<<Max+1<<endl;
	return 0;
}
