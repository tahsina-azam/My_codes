#include<bits/stdc++.h>
#define sz 20005
using namespace std;
list<int> adj[sz];
int color[sz];
enum{not_visited, Black, Red};
int main()
{
  int i,j,k,l,m,n,mx=0,tc,t,a,b,c,value , node;
  char ch;
  long long sum;

  cin>>tc;
  for(i=0;i<tc;i++)
  {
    mx=0;
  cin>>n;
  memset(color, 0 ,sizeof(color));
  for(j=0;j<sz;j++)
      adj[j].clear();

      for(j=0;j<n;j++)
      {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
      }
mx=0;

      for(j=0;j<sz;j++)
      {
        if(!adj[j].empty() && color[j]==not_visited)
        {
          int black=0 , red=0;
          queue<int>q;
          q.push(j);
          black++;
          color[j]=Black;
          while(!q.empty())
          {
            node=q.front();
            q.pop();
            for(list<int>:: iterator it=adj[node].begin(); it!=adj[node].end();it++)
            {
              if(color[*it]==not_visited)
              {
                q.push(*it);
                if(color[node]==Black)
          {
                    color[*it]=Red;
                    red++;
          }
                else
                 {
                    color[*it]=Black;
                    black++;
                 }
              }
            }
          }
mx+=max(black,red);
      }
  }

   printf("Case %d: %d\n",i+1,mx);
}
return 0;
}
