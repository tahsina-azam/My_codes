#include<bits/stdc++.h>
using namespace std;



 long long return_multiplication(long long  x)
 {
   if(DP[x]> 0)
    return DP[x];
   long long max_num=10,min_num=0, real_num=x;
   while(x>0)
   {
     long long y=x%10;
     x=x/10;
     max_num=min(max_num,y);
     min_num=max(min_num,y);
   }
   DP[real_num]=max_num*min_num;
   return (max_num*min_num);
 }

int main()
{
   memset(DP, -3, sizeof DP);
  long long i,j,k,l,m,n,t,a,x,p;
cin>>t;
  while(t--)
  {
    cin>>a>>k;
    x=a;
    k=k-1;
    while (k--)
    {
      p=return_multiplication(x);
      x+=p;
    }
    cout<<x<<endl;
  }
  return 0;
}
