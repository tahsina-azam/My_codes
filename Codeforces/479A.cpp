#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,ans;
    cin>>a>>b>>c;

    int p=a+b*c;
    int q=a*b+c;
    ans=max(p,q);
    int s=(a+b)*c;
    ans=max(ans,s);
    int t=a+(b*c);
    ans=max(ans,t);
    int f=a*b*c;
    ans=max(ans,f);
    int u=a+b+c;
    ans=max(ans,u);
    cout<<ans<<endl;

    return 0;

}
