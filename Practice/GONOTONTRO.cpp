#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,h,r,sum=0;
	vector<int> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	h=v.size();
	sort(v.begin(),v.end());
	for(i=0;i<((h/2)+1);i++)
	{
	sum=sum+((v[i]/2)+1)	
	}
	
	cout<<sum<<endl;
	return 0;
	
}
