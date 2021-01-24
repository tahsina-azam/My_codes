#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector< unsigned long long > cells;
  unsigned long long i,j,k,l,n,m,a,b,sum=0;

   scanf("%llu",&a);
   for(i=0;i<a;i++)
   {
     sum=0;
     scanf("%llu",&m);
     k=m/2;
     for(j=m;j>1;j-=2)
     {
       cells.push_back((j*4)-4);
     }
     b=0;
     for(j=k;j>=1;j--)
     {
       sum+=(cells[b]*j);
       b++;
     }
     printf("%llu\n",sum);
     cells.clear();
   }
   return 0;
}
