#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,m,n,v;
  scanf("%d%d%d",&m,&n,&l);
  int a[105];

  for(i=0;i<n;i++)
  {
    scanf("%d",&k);
    a[k]=1;
  }
  for(i=0;i<l;i++)
  {
    scanf("%d",&k);
    if(a[k]!=1)
      a[k]=2;
  }
  printf("%d",a[1]);
  for(i=2;i<=m;i++)
  {
    printf(" %d",a[i]);
  }
  printf("\n");
  return 0;
}
