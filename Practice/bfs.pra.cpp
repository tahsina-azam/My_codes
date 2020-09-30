#include<bits/stdc++.h>
#define sz 1000
#define pb push_back
using namespace std;
vector<int>adj[sz];
int visited[sz],weight[sz];
int bfs(int source, int dest,int n)
{
  queue<pair<int, int> > pq;
  int p,q,u,v;
  pq.push({0,source});
  weight[source]=0;
  visited[source]=1;
  while(!pq.empty())
  {
    p=pq.front().first;
    q=pq.front().second;
    pq.pop();
    if(q==dest)return weight[dest];
    for(int i=0;i<adj[q].size();i++)
    {
      if(!visited[adj[q][i]])
      pq.push({adj[q][i],weight[adj[q][i]]+1});
      visited[adj[q][i]]=1;
    }
  }
  return -1;
}
int main()
{
  int p,q,m,n,x,y,z,source, dest;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    cin>>x>>y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  cin>>source>>dest;
  int ret=bfs(source,dest,n);
  if(ret==-1)
    cout<<"not reachable"<<endl;
  else
    cout<<ret<<endl;
  return 0;
}
