#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;

find_ans(int n)
{
	v.push_back(1);
	v.push_back(2);
	for(int i=0;i<n-2;i++)
	{
     v.push_back(v[i]+v[i+1]+1);
	}
	for(int j=0;j<v.size();j++)
	{
		cout<<v[j]<<" ";
	}
	cout<<""<<endl;
	v.clear();
}
int main()
{
	int i,j,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		find_ans(n);
	}
	return 0;
}