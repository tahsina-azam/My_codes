#include<bits/stdc++.h>
using namespace std;
map<unsigned long long, unsigned long long> map_of;
map<unsigned long long, unsigned long long> times;


int main()
{
	unsigned long long i,j,k,l,m,n,max=0;
	vector<unsigned long long> v;

	cin>>n;
	for(i=0;i<n;i++)
	{
    cin>>k;
    v.push_back(k);
    map_of[k]=map_of[k]+1;
    times[k]=i;
	}
for(int i=0;i<n;i++)
{
	if(map_of[v[i]]>1)
	{
		max=max<(times[v[i]]-i+1)?(times[v[i]]-i+1):max;
		map_of[v[i]]=0;

	}
}
cout<<max<<endl;
return 0;
}