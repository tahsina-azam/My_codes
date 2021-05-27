#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ,m,a;
    vector<long long> v;
    long long ans=0;

    cin>>n>>m;
    while(m--){
        cin>>a;
        v.push_back(a);
    }
    ans+=(v[0]-1);
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]){
            ans+=(n-v[i-1]);
            ans+=v[i];
        }
        else{
            ans+=(v[i]-v[i-1]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
