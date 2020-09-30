#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
if(b%a==0)
  return a;
int c=b%a;
gcd(c,a);
}
int main()
{
  int i,j,k,l,n,m;
  vector<int> v;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>m;
    v.push_back(m);
  }
  sort(v.begin(),v.end());
 k=gcd(v[0],v[n-1]);
 for(i=0;i<n;i++)
 {
   if(v[i]%k!=0)
   {
     printf("%d\n",n);
     return 0;
   }
 }
 printf("%d\n",k*n);
  return 0;
}
