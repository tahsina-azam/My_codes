#include<bits/stdc++.h>
using namespace std;

void find_ans(int n,int m,int z)
{
	int cnt=0;
	
	for(int i=1;i<=z;i++)
	{
		if((n*i)%m==0)
		{
			if((n*i)>z)
			{
				break;
			}
			cnt++;
		}
	}
	cout<<cnt<<endl;
}

int main()
{
	int n,m,z;

	cin>>n>>m>>z;
	find_ans(n,m,z);
	return 0;
}