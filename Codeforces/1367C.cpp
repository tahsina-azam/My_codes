#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;
	std::vector<int> arr;


find_ans(int k,int n)
{
int ans=0;
	for(int i=0;i<n;i+=k)
	{
		int cnt=0;
		if(arr[i]!=1)
		{
			for(int j=i+1;j<=i+k;j++)
			{
				if(arr[j]==1)
				{
					cnt=1;
					break;
				}
			}
			if(cnt==0)
		{
			ans++;
		}
		}

	}

}

int main()
{
	unsigned long long t,n,k,i,j,k;
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		for(j=0;j<n;j++)
		{
			cin>>k;
			arr.push_back(k);
			if(k==1)
			{
				v.push_back(j);
			}
		}
		find_ans(k,n);
		v.clear();
		arr.clear();
	}
	return 0;
}