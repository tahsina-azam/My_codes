#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,m,i,j,k,a,b,c,sum=0;
	cin>>n>>h>>m;
int array[n];
for(i=1;i<=n;i++)
array[i]=h;
for(i=0;i<m;i++)
{
	cin>>a>>b>>c;
	for(j=a;j<=b;j++)
	{
		if(c<array[j])
		array[j]=c;
	}
}
for(k=1;k<=n;k++)
sum=sum+array[k]*array[k];

cout<<sum<<endl;
return 0;
}
