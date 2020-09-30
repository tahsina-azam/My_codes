#include<bits/stdc++.h>
using namespace std;
int sum=0;
int a[ ]={1,5,10,25,50};
int n=5;
long long DP[100][7490];
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
int x,y;
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
