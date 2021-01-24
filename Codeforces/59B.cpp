#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,sum=0,count=0;
	vector<int> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		sum=sum+j;
		v.push_back(j);
	}
	if(sum%2!=0)
	{
		cout<<sum<<endl;
	}
else
{
		sort(v.begin(),v.end());
		for(i=0;i<n;i++)
		{
			if(v[i]%2!=0)
			{
				count=1;
				sum=sum-v[i];
				break;
			}
		}
	if(count==1)
		cout<<sum<<endl;
		else
		cout<<"0"<<endl;
}
	
return 0;	
}

