#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long i,j,k,a,b,c,m,n,p,l,counter;
  scanf("%llu",&n);
  for(i=0;i<n;i++)
  {
    scanf("%llu",&p);
    m=pow(p,1/3)+1;
    counter=0;
    for(j=2;j<p;j++)
   {
      for(k=2;k<p/j+1;k++)
   {
      for(l=2;l<p/(j*k)+1;l++)
    {
      if(j*k*l==p && j!=k && k!=l && l!=j)
      {
        printf("YES\n");
        printf("%llu %llu %llu\n",j,k,l);
        counter=1;
        break;
      }
    }
    if(counter==1)
      break;
   }
   if(counter==1)
    break;
   }
    if(counter==0)
    printf("NO\n");
  }
  return 0;
}
