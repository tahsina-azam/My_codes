#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,a,b,c;
	cin>>a>>b>>c;
	if(a>b)
	{
		if(b+c<a)
		cout<<"+"<<endl;
		else 
		cout<<"?"<<endl;
	}
	else if(a==b && c==0)
	cout<<"0"<<endl;
	else if(a==b)
	cout<<"?"<<endl;
	else
	{
		if(a+c<b)
		cout<<"-"<<endl;
		else 
		cout<<"?"<<endl;
	}
return 0;	
}
