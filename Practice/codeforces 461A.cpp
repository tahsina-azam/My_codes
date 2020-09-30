#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long i,j,k,l,m,n,sum=0,sum1=0,sum2;
	cin>>n;
	vector<int>v;
	for(i=0;i<n;i++)
	{
		cin>>j;
		sum1=sum1+j;
		v.push_back(j);
	}
	sum=sum1;
sort(v.begin(),v.end());
	sum2=sum1-v[n-1];

for(i=0;i<n-1;i++)
{
sum1=sum1-v[i];
sum=sum+sum1;
}

cout<<sum2+sum<<endl;
return 0;
}
