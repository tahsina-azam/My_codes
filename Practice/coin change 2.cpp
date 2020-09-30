#include<bits/stdc++.h>
using namespace std;
int sum=0;
 long long a[ ]={5,10,20,50,100,200,500,1000,2000,5000,10000};
int n=11;
double DP[20][60000];
double f(int i,int remain)
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
    n=p*100.0;
    if(n==0)
      break;
    printf("%6.2lf%17.lf\n",p,f(0,n));
  }
  return 0;
}
