#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector< long long> v;
  vector< long long > r;
  long long i,j,k,l,m,n,o,p,x,y,z,sum=0,num=0;
  scanf("%lld",&n);
  for(i=0;i<n;i++)
  {
    scanf("%lld%lld%lld",&x,&y,&z);
    for(j=0;j<x;j++)
    {
      scanf("%lld%lld",&o,&p);
      v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(j=0;j<x;j++)
    {
      sum=1;
      if(j>0 && v[j-1]==v[j])
        {
          sum=0;
        }
      else
      for(k=j+1;k<x;k++)
      {
        if(v[k]-v[j]<=y)
        {
          sum++;
        }
        else
            break;
      }
      cout<<"sum"<< sum<<endl;
      r.push_back(sum);
    }
    sort(r.begin(),r.end(),greater<long long>());

    for(int w=0;w<z;w++)
    {
      if(w+1>r.size())
       break;
      num+=r[w];
    }
    printf("Case %lld: %lld\n",i+1,num);
    v.clear();
    r.clear();
    num=0;
  }
  return 0;
}
