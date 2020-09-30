#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long i,j,k,l,count=0,cnt,n;
	vector<int> v;
	vector<int> t;
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
			v.pop_back();
		}
	else
	{
		sort(v.begin(),v.end(),greater<int>());
		count++;
		cout<<v[0]<<endl;
	}
	}

	
	return 0;
	
}
