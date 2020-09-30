#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v1;
  vector<int> v2;
  int i,j,k,l,n,m,x,z,y,p;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    v1.clear();
    v2.clear();
    scanf("%d%d%d",&x,&y,&z);
    for(j=0;j<y;j++)
    {
      scanf("%d",&p);
       v1.push_back(p);
    }
    sort(v1.begin(),v1.end(),greater<int>());
    for(j=0;j<z;j++)
    {
      scanf("%d",&l);
      v2.push_back(l);
    }
    sort(v2.begin(),v2.end(),greater<int>());
    if(v1[0]>v2[0])
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}
