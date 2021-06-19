#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;


const int MAXN = 2e4+10;
const int MAXM = 1e6;
const int mod = 1e9+7;
const int inf = 0x3f3f3f3f;

int n,m;
vector<int>vc[MAXN];
int dp[MAXN]; int child[MAXN];
void init(){
    for(int i=0;i<=n;i++)
        vc[i].clear();
}
void dfs(int now,int pre){
    child[now]=1;
    for(int i=0;i<vc[now].size();i++){
        int v=vc[now][i];
        if(v==pre) continue;
        dfs(v,now);
        child[now]+=child[v];
        dp[now]=max(dp[now],child[v]);
    }
    dp[now]=max(dp[now],n-child[now]);
}

int main(){


    int t;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        m=n-1;

        init();
        while(m--){
            int a,b;scanf("%d%d",&a,&b);
            vc[a].push_back(b);
            vc[b].push_back(a);
        }
        memset(dp,0,sizeof(dp));
        dfs(1,-1);
        int ans,sum=inf;
        for(int i=1;i<=n;i++){
            if(sum>dp[i]) {
                sum=dp[i];
                ans=i;
            }
        }
        printf("%d %d\n",ans,sum);
    }
    return 0;
}
