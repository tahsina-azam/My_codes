#include<bits/stdc++.h>
using namespace std;

int main()
{
 unsigned long long i,j,k,l,m,n,o;
 scanf("%llu",&n);
 for(i=0;i<n;i++)
 {

   scanf("%llu%llu",&m,&o);
   for(j=0;j<o;j++)
   {
     if(m%2==0)
     {
       m=m+2*(o-j);
       break;
     }
     else
  {
       for(l=3;l<=m;l++)
       {
         if(m%l==0)
          {
            m+=l;
            break;
          }
       }
     }
   }
   printf("%llu\n",m);
 }
  return 0;
}
