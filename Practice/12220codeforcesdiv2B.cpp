#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long i,j,k,l,m,n,day,o,road,good,bad,half,remain,cnt;
  scanf("%llu",&n);
  for(i=0;i<n;i++)
  {
    p=0;
    scanf("%llu%llu%llu",&road,&good,&bad);
    if(road%2==0)
     half= road/2;
    else
    half=(road+1)/2;
  for(j=0; ;j++)
  {
    if(road<good)
    {
      day=road;
      break;
    }
    else if(half<good)
    {
      day=road;
      break;
    {

      remain=road-half;

      while (half!=0)
      {
        if(half>good)
        {
          half=half-good;
          day+=good;
        }
        if(half==good)
        {
          half=0;
          day+=half;

        }
        cnt++;
      }

  }
    printf("%llu\n",p);
  }
  return 0;
}
