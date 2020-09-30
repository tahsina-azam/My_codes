#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
 vector<int> g[10];
void dfs( int curr)
{
  cout<<curr<<endl;
  vis[curr]=true;
  cout<< curr<<endl;
  int l=g[curr].size();
  for(int i=0;i<l;i++)
  {
    int adj=g[curr][i];
    if(vis[adj]==false)
      dfs(adj);
  }
}

int main()
{
  int n,m,i,j,k,a,b;
  cin>>n>>m;
  for(i=0;i<m;i++)
{
  cin>>a>>b;
  g[a].push_back(b);
  g[b].push_back(a);
}
dfs(1);
   return 0;
}
