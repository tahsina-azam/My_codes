#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long i,j,k,m,n,a,b,c,rm1,rm2,pm;
  vector<unsigned long long > v;
  scanf("%llu",&n);
  for(i=0;i<n;i++)
  {
    scanf("%llu%llu%llu%llu",&a,&b,&c,&m);
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    rm1=v[2]-v[0];
    rm2=v[2]-v[1];
    if(m==0)
      printf("NO\n");
 else  if(rm1+rm2>m)
      printf("NO\n");
      else if(rm1+rm2==m)
      printf("YES\n");
    else
    {
      pm=m-rm1-rm2;
      if(pm%3==0)
        printf("YES\n");
      else
        printf("NO\n");
    }
    v.clear();
  }
  return 0;
}
