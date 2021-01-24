#include<bits/stdc++.h>
using namespace std;
int sum=0;
int a[ ]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
long long p=21;
long long DP[40][10005];
 long long f(long long i,long long remain)
{
  if(remain<0)
    return 0;
    if(remain==0)
      return 1;
    if(i==p)
      return 0;
      if(DP[i][remain]>-1)
      return DP[i][remain];
long long x,y;
  x=f(i+1,remain);
  y=f(i,remain-a[i]);
  DP[i][remain]=x+y;
  return DP[i][remain];
  }
int main()
{
  long long n,i,j,k,l,m;
 memset(DP, -3, sizeof DP);
  while(scanf("%lld",&n)!=EOF)
  {
    printf("%lld\n",f(0,n));
  }
  return 0;
}
