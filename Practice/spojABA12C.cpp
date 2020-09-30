#include<bits/stdc++.h>
using namespace std;

long long a[1005];
long long int k, sum, total;

int apples(int a[], int n)
{
  if(n==k)
    return 0;
  else if(a[n]==-1)
  return sum+=apples(a,n+1);
  if(sum+a[n]<=5)

}

int main()
{
  long long int i,j,l,m,o,p;

  scanf("%lli",&n);

  for(i=0;i<n;i++)
  {
    memset(a,0,1005);
    scanf("%lli%lli",&m,&k);

    for(j=0;j<k;j++)
    {
      sum=0 ,
      scanf("%lli",&a[i]);
    }
    apples(a,0);
  }

}
