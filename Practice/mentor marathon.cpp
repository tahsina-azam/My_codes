#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,sum=0,sum1=0,count=0;
	vector<int> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		sum=sum+j;
		cout<<j<<endl;
		v.push_back(j);
	}
	cout<<"main="<<sum<<endl;
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	cout<<v[i]<<endl;
	if(sum%2!=0)
{
		cout<<sum<<endl;
		count=1;
}
	else
	{
		for(i=0;i<n;i++)
	{
		sum=sum-v[i];
		cout<<"sum= "<<sum<<endl;
		if(sum%2!=0)
		{
			cout<<sum<<endl;
			count=1;
			break;
		}
	}
	}
	
	if(count==0)
	cout<<count<<endl;
	return 0;
	
}

