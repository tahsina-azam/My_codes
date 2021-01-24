#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,o,ct,p,sum=0,num=0;
    vector<int>v;
 for(int q=1;;q++)
 {
     scanf("%d",&m);
  if(m!=0)
  {
      ct=0;
      num=0;
      sum=0;
      i=m;
      while(i!=0)
      {
          if(i%2==0)
      {
          v.push_back(0);
      }
      else
      {
          v.push_back(1);
          sum++;
      }
      i/=2;
      ct++;
      }
       printf("The parity of ");
       for(j=ct-1;j>=0;j--)
       {
           cout<<v[j];
       }
       printf(" is %d (mod 2).\n",sum);
  }
  else
   return 0;
   v.clear();
}
}
