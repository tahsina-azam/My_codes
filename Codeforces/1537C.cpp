#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,p;
    vector<int> v;
    cin>>n;
    while(n--){
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>p;
            v.push_back(p);
        }

        sort(v.begin(),v.end());

        long long a,b,dif=0,mini=1000000000;
        for(int i=1;i<v.size();i++){
           dif=v[i]-v[i-1];
            if(dif<mini){
             mini=dif;
             a=i-1;
             b=i;
            }
        }
        cout<< (v[a]<v[b]? v[a] : v[b]) <<" ";
        for(int i=0;i<v.size();i++){
            if(v.size()-i!= a && v.size()-i!=b && (v.size()-i)>i){
                cout<<v[v.size()-1]<<"p ";
            }
            if(i!=a && i!=b && i<(v.size()-i)){
                cout<<v[i]<<" d";
            }

        }
        cout<<(v[a]<v[b]? v[b] : v[a])<<endl;
        v.clear();
    }
    return 0;
}
