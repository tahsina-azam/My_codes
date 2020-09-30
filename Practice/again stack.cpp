#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long i,j,k,l,count=0,cnt,n;
	vector<int> v;
	vector<int> t;
	vector<int> y;
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
		y=v;
		sort(y.begin(),y.end(),greater<int>());
		count++;
		t.push_back(y[0]);
	}
	y.clear();
	}
	for(i=0;i<count;i++)
	cout<<t[i]<<endl;
	
	return 0;
	
}
