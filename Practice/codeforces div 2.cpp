#include<bits/stdc++.h>
#define sz 1000000
using namespace std;
int main()
{
	int i,j,k,l,n,m,ct=0,cnt=0;
	unsigned long long array[sz];
	int x,y;
	cin>>n>>x>>y;
	for(i=0;i<n;i++)
	{
	cin>>array[i];	
	}
	for(i=x+1;i<n-y;i++)
	{
	for(j=1;j<=x;j++)
	{
		if(array[i-j]>array[i])
		{
		ct++;	
		}
	
		}	
		for(k=1;k<=y;k++)
		{
			if(array[i+k]>array[i])
			{
				cnt++;
			}
		}
		if(ct==x && cnt==y)
		cout<<i+1<<endl;
		break;
	}
	return 0;
}
