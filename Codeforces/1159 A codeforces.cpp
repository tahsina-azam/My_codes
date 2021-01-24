#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,temp,count;
	char n;
	vector<char> v;
	cin>>m;
	l=0;
	for(i=0;i<m;i++)
	{
		cin>>n;
		v.push_back(n);
		if(n=='+' && l==0)
		{
			temp=i;
			l=1;
		}
		
	}
	count=0;
	for(j=temp;j<m;j++)
	{
	if(v[j]=='+')
	count++;
	if(v[j]=='-' && count!=0)
	count--;	
	}
	cout<<count<<endl;
	return 0;
}
