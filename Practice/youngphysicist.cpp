#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,i,j,k,n,sum=0;
  long long p=0,q=0,r=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d%d",&a,&b,&c);
   p=p+a;
   q=q+b;
   r=r+c;
  }
  if(p==0 && q==0 && r==0)
  {
    printf("YES\n");
  }
  else
    printf("NO\n");
  return 0;
}
