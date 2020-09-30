#include<bits/stdc++.h>
using namespace std;

int find_ans(unsigned long long n)
{
	if(n%2==0)
	{
		cout<<(n/2)<<" "<<(n/2)<<endl;
		return 1;
	}
	unsigned long long first=n/2;
	unsigned long long second=first+1;
	if(first%2==0)
	{
		first--;
	second++;
	}
	for(long long i=0;i<n/2;i++)
	{
		if(first<1)
		{
			break;
		}
		unsigned long long lcm =second%first;
		if(lcm==0)
		{
          cout<<first<<" "<<second<<endl;
          return 1;
		}
      first-=2;
      second+=2;
	}
return 0;
}

int main()
{
	unsigned long long i,j,k,l,m,n,t;

	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		int p=find_ans(n);
		if(p==0)
		{
			cout<<1<<" "<<(n-1)<<endl;
		}
	}
	return 0;
}