#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long arr[2005];
  long long i,j,k,l,m,n,t,sum,cnt;
  scanf("%llli",&t);
  for(j=0;j<t;j++)
  {
    sum=0;
    cnt=0;
    scanf("%lli",&n);
    for(i=0;i<n;i++)
    {
      scanf("%lli",&arr[i]);
      sum+=arr[i];
      if((arr[i]*n)%2!=0)
      {
        cnt++;
        break;
      }
    }
    if(sum%2!=0 || cnt!=0)
      printf("YES\n");
   else
    printf("NO\n");
  }
  return 0;
}
