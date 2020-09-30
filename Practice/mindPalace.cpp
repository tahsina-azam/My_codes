#include<bits/stdc++.h>
using namespace std;


int main()
{
	int m,n,t,count;
	long long num;
	cin>>n>>m;
	long long a[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}

	cin>>t;
	for(int i=0;i<t;i++)
	{
		count=0;
		cin>>num;
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==num)
			{
				cout<<i<<" "<<j<<endl;
				count=1;
				break;
			}
		}
		if(count==1)
		{
			break;
		}
	}
	if(count==0)
	{
		cout<<"-1 -1"<<endl;
	}
	}
return 0;
}