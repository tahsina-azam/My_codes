#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,l,m,n,t,solve,sum;
vector<long long int> v;
bool isthereone;
cin>>t;
for(i=0;i<t;i++)
{
  sum=0;
  isthereone=false;
  cin>>n;

  for(j=0;j<n;j++)
  {
    cin>>m;
    if(m>1)
      isthereone=true;
    v.push_back(m);
}
if(!isthereone)
{
  if(n%2==0)
  cout<<"Case "<<i+1<<": "<<"Alice"<<"\n";
  else
       cout<<"Case "<<i+1<<": "<<"Bob"<<"\n";

}
else
{
  solve=v[0];
for(k=1;k<n;k++)
  solve^=v[k];

  if(solve==0)
    cout<<"Case "<<i+1<<": "<<"Bob"<<"\n";
  else
    cout<<"Case "<<i+1<<": "<<"Alice"<<"\n";
}
    v.clear();
}
return 0;
}
