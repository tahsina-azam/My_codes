#include<bits/stdc++.h>
using namespace std;

void find_ans(int n,int a, int b)
{
	int cnt=0;
	int strt=a;

	if(b>=0)
	{
		for(int i=1;i<=b;i++)
		{
				if(strt==n)
			{
				strt=1;
			}
			else
			{
				strt++;
			}
		}
	}
	else
	{
		b=b*(-1);

		for(int i=1;i<=b;i++)
		{
				if(strt==1)
			{
				strt=n;
			}
			else
			{
				strt--;
			}
		}
	}
	cout<<strt<<endl;
}

int main()
{
	int n,a,b;

	cin>>n>>a>>b;
	find_ans(n,a,b);
	return 0;
}