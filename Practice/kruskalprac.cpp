#include<iostream>
#include<vector>
#include<queue>
#define sz 1000
#define pb push_back
using namespace std;
vector<int> adj[sz], cost[sz];
priority_queue<pair<int,pair<int , int> >, vector<pair<int, pair<int,int> > >,greater<pair<int, pair<int,int> > > > pq;
int par[sz];
int find_par(int n)
{
  if(par[n]==n)
    return n;
  return par[n]=find_par(par[n]);
}
int mst(int n)
{
  int p,q,w=0,u,v,total=0;
  for(int st=0;st<n;st++)
  {
    for(int i=0;i<adj[st].size();i++)
    {
      p=min(st, adj[st][i]);
      q=max(st,adj[st][i]);
      pq.push({cost[st][i],{p,q}});
    }

  }
  vector< pair<int, pair<int,int> > > ans;
while(!pq.empty())
{
      w=pq.top().first;
    p=pq.top().second.first;
    q=pq.top().second.second;
    pq.pop();
    u=find_par(p);
    v=find_par(q);
    if(u!=v)
    {
      par[u]=v;
      ans.pb({w,{p,q}});
      total+=w;
    }

}
return total;
}
void mst_init()
{
  for(int i=0;i<sz;i++)
  {
    par[i]=i;
  }
  return ;
}
int main()
{
  int p,q,m,n,x,y,z;
  mst_init();
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    cin>>x>>y>>z;
    adj[x].pb(y);
    adj[y].pb(x);
    cost[x].pb(z);
    cost[y].pb(z);
  }
  cout<<"the minimum cost is "<< mst(n)<<endl;
  return 0;
}
