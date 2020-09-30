#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,k,m,n,j;
    long long int count,A,B,C,l,x1,x2,y1,y2;
   cin>>n;
   for(i=0;i<n;i++)
   {
   	count=0;
   	cin>>A>>B>>C>>x1>>x2>>y1>>y2;
   	for(j=x1;j<=x2;j++)
   	{
   	l=(-C-(A*j));
   for(k=y1;k<=y2;k++)
   {
   	if(l==(k*B))
   	{
   		count++;
   		break;
	   }
   }
      }
	   cout<<"Case "<<i+1<<": "<<count<<endl;
   }
   return 0;
}
