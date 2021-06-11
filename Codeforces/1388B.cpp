#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;

    cin>>t;
    while(t--){
        cin>>n;
        int p=ceil(n/4.0);
        for(int i=0;i<n-p;i++){
            cout<<9;
        }
        for(int i=0;i<p;i++){
            cout<<8;
        }
        cout<<endl;
    }
  return 0;
}
