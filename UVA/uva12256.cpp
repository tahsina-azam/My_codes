#include<bits/stdc++.h>
using namespace std;

long long ans[66];

int main(){
    int n;
    ans[1]=ans[2]=ans[3]=1;
    for(int i=4;i<61;i++){
        ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
    }

    int cas=1;

    while(scanf("%d",&n) && n){
        printf("Case %d: %lld\n",cas++,ans[n]);
    }
    return 0;

}
