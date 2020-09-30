#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	string p;
	cin>>n>>p;
	if(n==1 || n==2)
	{
		if(p[0]=='A' || p[0]=='D')
		cout<<"window"<<endl;
		else
		cout <<"aisle"<<endl;
		return 0;
	}
	else if(n>=3 && n<=20)
	{
		if(p[0]=='A' || p[0]=='F')
		cout<<"window"<<endl;
		else 
		cout<<"aisle"<<endl;
	}
	else
	{
		if(p[0]=='A' || p[0]=='K')
		cout<<"window"<<endl;
		else if(p[0]=='C' || p[0]=='D' || p[0]=='G' || p[0]=='H')
		cout<<"aisle"<<endl;
		else
		cout<<"neither"<<endl;
	}
	return 0;
}
