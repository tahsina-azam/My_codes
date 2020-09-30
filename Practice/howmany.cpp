#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<long long> v;
  long long i,j,k,l,n,m,o,p,x,y,z,lwr,upr;
  scanf("%lld%lld",&m,&n);
  for(i=0;i<m;i++)
  {
    scanf("%lld",&o);
    v.push_back(o);
  }
  for(j=0;j<n;j++)
  {
    scanf("%lld%lld%lld",&x,&y,&z);
     vector<long long>::iterator lower,upper;
    lower = lower_bound (v.begin(), v.end(), z);
    upper = upper_bound (v.begin(), v.end(), z);
    lwr=lower-v.begin();
    upr=upper-v.begin()-1;
    x=x-1;
    y=y-1;
    if(lwr>y || upr<x)
      printf("0\n");
     else   if(lwr>=x && upr<=y)
          printf("%lld\n",upr-lwr+1);
      else if(lwr<x && upr>y)
        printf("%lld\n",y-x+1);
    else if(upr<=y)
      printf("%lld\n",upr-x+1);
    else if(lwr>=x)
      printf("%lld\n",y-lwr+1);
      else
        printf("0\n");
  }
  return 0;
}
