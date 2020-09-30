#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,k,l,m,n;
	unsigned long long j;
	vector<unsigned long long> v;
cin>>n;
for(i=0;i<n;i++)
{
cin>>k;
if(k==1)
{
	cin>>j;
	v.push_back(j);
	}	
	else if(k==2)
	{
		if(!v.empty())
		v.pop_back();
	}
	else
	{
		if(v.empty())
		{
			cout<<" "<<endl;
		}
		else
		{
			sort(v.begin(),v.end(),greater<unsigned long long>());
			cout<<v[0]<<endl;
		}
	}
}
return 0;
}
