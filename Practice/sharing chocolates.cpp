#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long i,j,k,l,m,n;
  int p;
  vector<unsigned long long > v;
  scanf("%llu",&l);
  for(i=0;i<l;i++)
  {
    scanf("%llu",&k);
    v.push_back(k);
  }
  printf("-1");
  for(i=1;i<l;i++)
  {
for(j=i-1;j>=0;j--)
{
   p=0;
  if(v[j]<v[i])
  {
    printf(" %llu $",j+1);
    cout<<v[j]<<" "<<v[i]<<endl;
     p=1;
     break;
  }
}
  if(p!=1)
    printf(" -1&");
  }
  return 0;
}
