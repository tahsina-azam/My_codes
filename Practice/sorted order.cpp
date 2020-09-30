#include<bits/stdc++.h>

using namespace std;
int main()
{
	unsigned long long i,j,k,l,m,n,sum=0,sum1;
	cin>>n;
	vector<int> v;
	for(i=0;i<n;i++)
	{
		cin>>j;
		v.push_back(j);
		
	}

sort(v.begin(),v.end());

for(i=0;i<n;i++)
cout<<v[i]<<" ";
return 0;
}

