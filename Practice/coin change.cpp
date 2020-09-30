#include<bits/stdc++.h>
using namespace std;
int sum=0;
 long long a[ ]={10000,5000,2000,1000,500,200,100,50,20,10,5};
int n=11;
long long DP[16][30009];
long long f(long long i,long long remain)
{
  if(remain<0)
    return 0;
    if(remain==0)
      return 1;
    if(i==n)
      return 0;
      if(DP[i][remain]>-1)
      return DP[i][remain];
long long  x,y;
  x=f(i+1,remain);
  y=f(i,remain-a[i]);
  DP[i][remain]=x+y;
  return DP[i][remain];
  }
int main()
{
  long long n,i,j,k,l,m;
  double p;
 memset(DP, -10, sizeof DP);
  while(scanf("%lf",&p),p>0.0000000001)
  {
    n=p*100;
    printf("%6.2lf%17lld\n",p,f(0,n));
  }
  return 0;
}

