#include<bits/stdc++.h>
using namespace std;

 int main()
 {
   long long i,j,k,p,n,m;
   scanf("%I64d",&k);
   for (i=0;i<k;i++)
   {
     scanf("%I64d%I64d",&n,&m);
     if(n<=2)
      p=n-1;
     else
      p=2;
     printf("%I64d\n",p*m);
   }
   return 0;
 }
