#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,k,a,b,sum=0;
	cin>>n;
	vector<int> v;
	for(i=0;i<n-1;i++)
	{
		cin>>m;
		v.push_back(m);
	}
	
	cin>>a>>b;
	
	for(k=a-1;k<b-1;k++)
	{
		sum=sum+v[k];
	}
	cout<<sum<<endl;
	return 0;
}
