#include<bits/stdc++.h>
using namespace std;

void find_ans(long double n)
{
	int p=ceil(n/2);
	cout<<p<<endl;
}

int main()
{
	unsigned long long t;
	long double n;

	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		find_ans(n);
	}
	return 0;
}