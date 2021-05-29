#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,a,b;
    int n,m;
    vector<string> v;
    map<string,string> word;

    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        if(a.size()>b.size()){
            word[a]=b;
            word[b]=b;
        }
        else{
            word[b]=a;
            word[a]=a;
        }
    }
    while(n--){
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++){
        cout<<word[v[i]]<<" ";
    }
    cout<<endl;
    return 0;
}
