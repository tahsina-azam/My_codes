#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll sz = 1000001;
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
long long a[sz],p[sz],f[sz];

int main()
{
  long long t,n,i,j,k,l,m,g;
  scanf("%lli",&t);
  for(i=0;i<t;i++)
  {
    scanf("%lli",&n);
    for(j=0;j<n;j++)
    {
      scanf("%lli",&a[j]);
    }
    if(n==2)
    {
      printf("%lli",max(a[0],a[1]));
      continue;
    }
     p[0]=a[0] ;
     for(k=1;k<n;k++)
     {
       p[k]=gcd(a[k],p[k-1]);
     }
     f[n-1]=a[n-1];
     for(k=n-2;k>=0;k--)
     {
       f[k]=gcd(a[k],f[k+1]);
     }
     m=f[1];
     for(int k=1;k<n-1;k++)
         {
             g=gcd(f[k+1],p[k-1]);
             m=max(g,m);
         }
          m=max(m,p[n-2]);
         printf("%lli",m);
  }
  return 0;
}
