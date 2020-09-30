#include <iostream>
#include <vector>
#include <queue>
#define sz 1000
#define pb push_back
using namespace std;

vector<int>adj[sz],cost[sz];
priority_queue<pair< int, pair<int,int> >,
        vector< pair< int, pair<int,int> > >,
        greater< pair< int, pair<int,int> > > > pq;
int par[sz],col[sz];

int find_par(int n)
{
    if(par[n]==n)
        return n;
    return par[n] = find_par(par[n]);
}

int mst(int st)
{
    int p, q, w=0,total=0,u,v;
    for (int i = 0; i<adj[st].size(); i++)
    {
        p = min(st,adj[st][i]);
        q = max(st,adj[st][i]);
        pq.push({cost[st][i],{p,q}});
    }
    col[st] = 1;
    vector< pair< int, pair<int,int> > > ans;
    while(!pq.empty())
    {
        w = pq.top().first;
        p = pq.top().second.first;
        q = pq.top().second.second;
        pq.pop();
        u = find_par(p);
        v = find_par(q);
        if(u!=v)
        {
            par[u] = v;
            ans.pb({w,{p,q}});
            total+=w;
        if(col[p]&&col[q])
              continue;
            st = col[p]?q:p;
            col[st]=1;
            for (int i = 0; i<adj[st].size(); i++)
            {
                p = min(st,adj[st][i]);
                q = max(st,adj[st][i]);
                pq.push({cost[st][i],{p,q}});
            }
        }
    }

    cout <<"Edge List in MST:\n";
    for (int i = 0; i<ans.size(); i++)
    {
        w = ans[i].first;
        p = ans[i].second.first;
        q = ans[i].second.second;
        cout << "("<<p<<","<<q<<") -> " <<w <<"\n";
    }

    return total;
}

void mst_init()
{
    for (int i = 0; i<sz; i++)
        par[i]=i,col[i]=0;
    return;
}

int main()
{
    int n, m, x, y, z;
    mst_init();
    cin >> n >> m;

    for (int i = 0; i<m ; i++)
    {
        cin>>x>>y>>z;
        adj[x].pb(y);
        adj[y].pb(x);
        cost[y].pb(z);
        cost[x].pb(z);
    }

    cout << "Total Weight = " << mst(1) << "\n";

    return 0;
}
