#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long p,cnt=0,st=0,en;
    vector<long long> a,check;

    cin>>n;

    en=n-1;
    for(int i=0;i<n;i++){
        cin>>p;
        a.push_back(p);
    }
    if(n==1){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }

    for(int i=0;i<n-1;i++){
        if(cnt==0 && a[i]>a[i+1]){
            cnt=1;
            check.push_back(a[i]);
            st=i;
        }
        else if(cnt==1 && a[i]<a[i+1]){
            cnt=0;
            check.push_back(a[i]);
            en=i;
            //cout<<a[i]<<endl;
        }
        else if(cnt==1){
            check.push_back(a[i]);
        }
        if(cnt==1 && i+1==n-1){
            cnt=0;
            check.push_back(a[i+1]);
            en=i+1;
        }
    }
     sort(a.begin(),a.end());

    // cout<<st<<" "<<en<<endl;

    /*for(int i=0;i<=en-st;i++){
        cout<<check[i]<<endl;
    }*/

    sort(check.begin(),check.end());

    if(check.empty()){
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
    }
    else{
            int ind=0;
        for(int tt=st;tt<=en;tt++){
           if(a[tt]!=check[ind++] ){
              //  cout<<a[tt]<<" "<<check[ind]<<endl;
             cout<<"no"<<endl;
             return 0;
           }
        }
        cout<<"yes"<<endl;
        cout<<st+1<<" "<<en+1<<endl;
    }
    return 0;
}
