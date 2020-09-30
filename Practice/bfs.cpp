#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<bool> v;
vector< vector<int> > g;
void edge(int a,int b)
{
  g[a].pb(b);
  //if it was a undirected graph then we should have written
  //g[b].pb(a);

}
void bfs(int u)
{
  queue<int> q;
   q.push(u);
   v[u]==true;

  while (!q.empty())
  {
    int f=q.front();
    q.pop();
cout<<" " <<f;

    for(auto i = g[f].begin() ; i!=g[f].end() ; i++)
    {
      if(!v[*i])
      {
        q.push(*i);
        v[*i]=true;
      }
    }
  }
  }
int main()
{
  int n,e,a,b;
  cin>>n>>e;
  for(int j=0;j<e;j++)
  {
    cin>>a>>b;
    edge(a,b);
  }
for(int k=0;k<n;k++)
{
  if(!v[k])
    bfs(k);
}
return 0;
}
