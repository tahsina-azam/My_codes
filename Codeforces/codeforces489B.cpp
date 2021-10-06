#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p,q,pr=0;
    vector<int> a,b;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>p;
        a.push_back(p);
    }
    sort(a.begin(),a.end());

    cin>>m;

    for(int j=0;j<m;j++){
        cin>>q;
        b.push_back(q);
    }
    sort(b.begin(),b.end());

    for(int j=0;j<n;j++){
        for(int k=0;k<m;k++){
            if(abs(a[j]-b[k])<2){
                b[k]=1000;
                pr++;
                break;
            }
        }
    }
    cout<<pr<<endl;
    return 0;
}
