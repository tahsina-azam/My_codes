#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,l,m,n,t,solve,sum,a,b;
vector<long long int> v;
bool isthereone;
cin>>t;
for(i=0;i<t;i++)
{
  solve=0;
 cin>>n>>m;
 for(j=1;j<=n;j++)
 {
   sum=0;
   for(k=1;k<=m;k++)
   {
     cin>>l;
     sum+=l;
   }
   solve^=sum;
 }
 if(solve) cout<<"Case "<<i+1<<": "<<"Alice"<<"\n";
 else cout<<"Case "<<i+1<<": "<<"Bob"<<"\n";
}
return 0;
}
