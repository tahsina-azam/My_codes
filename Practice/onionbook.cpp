#include<bits/stdc++.h>
using namespace std;
int par[10000];
set<int> myset;

void mk_union(int i)
{
  par[i]=i;
}

int find_root(int root)
{
  if(par[root]==root)return root;
  par[root]=find_root(par[root]);
  return par[root];
}

void  make_union(int a ,int b)
{
  int x=find_root(a);
  int y=find_root(b);
  if(x!=y)
    par[x]=y;
}
int main()
{
  memset(par ,-1,sizeof par);
  int i,j,k,l,m,n,x,y;
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)
  {
    mk_union(i);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d%d",&x,&y);
    make_union(x,y);
  }
  for(j=1;j<=n;j++)
  {
    myset.insert(par[j]);
  }
  cout<<myset.size()<<endl;
  return 0;
}
