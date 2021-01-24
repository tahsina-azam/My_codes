#include<bits/stdc++.h>

using namespace std;
int main()
{
	int i,j,k,l,m,n,sum=0,sum1;
	cin>>n;
	vector<int> v;
	for(i=0;i<n;i++)
	{
		cin>>j;
		sum=sum+j;
		v.push_back(j);
		
	}

sort(v.begin(),v.end(),greater<int>());

	for(k=0;k<n;k++)
	{
		for(m=0;m<=k;m++)
		{
		sum1=sum1+v[m];	
		}
		if(sum1>(sum-sum1))
	{
			cout<<k+1<<endl;
			break;
	}
		sum1=0;
	}
	
	return 0;
}
