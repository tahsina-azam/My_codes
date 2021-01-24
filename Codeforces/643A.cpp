#include<bits/stdc++.h>
using namespace std;
long long counter=0;
void check_triangle(long long x, long long y, long long z )
{
  if(x+y>z)
  {
    counter++;
  }
}
int main()
{
   long long i,j,k,l,m,n,a,b,c,d;
   cin>>a>>b>>c>>d;
   for(i=a;i<=b;i++)
   {
     for(j=b;j<=c;j++)
     {
       for(k=c;k<=d;k++)
       {
         check_triangle(i,j,k);
       }
     }
   }
  cout<<counter<<endl;
  return 0;
}
