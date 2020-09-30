#include<bits/stdc++.h>
using namespace std;
void print_ans(string b)
{
	int n=b.size();
	if(n==2)
	{
		cout<<b<<endl;
	}
	else
	{
		cout<<b[0];
		for(int i=1;i<n-1;i+=2)
		{
			cout<<b[i];
		}
		cout<<b[n-1]<<endl;
	}

}
int main()
{
	string b;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>b;
		print_ans(b);
	}
	return 0;

}