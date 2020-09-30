#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
  int i,j,k,l,m,tc;
  double t,o,p,h;
scanf("%d",&tc);
for(i=0;i<tc;i++)
{
  scanf("%lf",&t);
  o=pi*t*t;
  h=t*t*4;
  printf("Case %d: %0.2lf\n",tc+2,h-o);
}
  return 0;
}
