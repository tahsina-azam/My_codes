#include<bits/stdc++.h>
using namespace std;
int cost[1010];
int wt[1010];
int mx_wt[1010];
int DP[1010][100];
int n;
int knpsk(int ind,int remain)
{
  if(ind==n-1)
  {
    if(wt[ind]>remain)
      return 0;
    else
      return cost[ind];
  }
  if(DP[ind][remain]>-1)
    return DP[ind][remain];
  int x,y;
  if(remain>=wt[ind])
  {
   x= cost[ind]+ knpsk(ind+1,remain-wt[ind]);
  }
  else
    x=0;
  y=knpsk(ind+1, remain);

  return   DP[ind][remain]=max(x,y);

}
int main()
{
  int i,j,k,l,m,o,x,y,t;
scanf("%d",&t);
for(j=0;j<t;j++)
{
  memset(DP , -3 ,sizeof DP);
   scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&x,&y);
    cost[i]=x;
    wt[i]=y;
  }
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    scanf("%d",&x);
    mx_wt[i]=x;
  }
  int sum=0;
  for(i=0;i<m;i++)
  {
    sum+=knpsk(0,mx_wt[i]);
  }
  printf("%d\n",sum);
}
return 0;
}
