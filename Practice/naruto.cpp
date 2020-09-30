#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,l,m,n,L,R,K,N,V,Q,num;
	vector<long long int> v;
	vector<long long int> s;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>j;
	v.push_back(j);
	}
	cin>>Q;
	for(i=0;i<Q;i++)
	{
		cin>>num;
		if(num==1)
		{
			cin>>V;
			v.push_back(V);
		}
		if(num==2)
		v.pop_back();
		if(num==3)
		{
			cin>>L>>R>>K;
			s=v;
		sort(s.begin()+(L-1),s.begin()+(R-1),greater<int>());
		cout<<s[L-1+K]<<endl;
		s.clear();
		}
	}
	return 0;
}
