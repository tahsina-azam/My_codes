#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,a,b,power;
    vector< pair <int ,int> > v;
    bool isyes=1;

    cin>>s>>n;
    power=s;

    while(n--){
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(power>v[i].first){
            power+=v[i].second;
            cout<<power<<endl;
        }
        else{
            cout<<"NO"<<endl;
            isyes=0;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
