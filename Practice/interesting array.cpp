#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int i,j,k,l,m,n;
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    v.clear();
    scanf("%d",&n);
    for(j=0;j<n;j++)
      {
        scanf("%d",&k);
        v[j]=k;
      }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<"  "<<v[0]<<endl;
    if(v[n-1]-v[0]>=n)
      {
        printf("YES\n");
        if(v[0]<=1 || v[0]>n)
          printf("1 ");
        else
          printf("%d ",v[0]);
          if(v[n-1]>=n || v[n-1]<1)
            printf("%d\n",n);
          else
            printf("%d\n",v[n-1]);
      }
    else
      printf("NO\n");
  }
  return 0;
}
