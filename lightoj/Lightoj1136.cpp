#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,mod1,mod2;
	int i,j,k,l,m;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		mod1=(a/3)*2;
		mod2=(b/3)*2;
		if(a%3==2)
		mod1=mod1+1;
		if(b%3==2)
		mod2=mod2+1;
		k=mod2-mod1;
		k+=1;
		if(a%3==1)
		k-=1;
		cout<<"Case "<<i+1<<": "<<k<<endl;
		
	}
	return 0;
}
