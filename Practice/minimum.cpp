#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,n,m,p,q;
  vector<int >v;
  vector<int> a;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&k);
    v.push_back(k);
    a.push_back(k);
}
sort(v.begin(),v.end());
for(i=0;i<n;i++)
{
  if(a[i]==v[0])
    m=i;
}
for(i=0;i<n;i++)
{
  if(a[i]==v[n-1])
    j=i;
}
if(m<j)
  {
    p=n-m-1;
    if(p>j)
      cout<<p<<endl;
    else
      cout<<j<<endl;
  }
else
{

    q=n-j-1;
  if(q>m)
    cout<<q<<endl;
  else
    cout<<m<<endl;
  }
  return 0;
}
