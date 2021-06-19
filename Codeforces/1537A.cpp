#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,sum=0;

    cin>>t;
    while(t--){
       cin>>n;

       sum=0;
       for(int i=0;i<n;i++){
        cin>>p;
        sum+=p;
       }
       if(sum==n){
        cout<<0<<endl;
       }
       else if(sum>n){
        cout<<sum-n<<endl;
       }
       else{
        cout<<1<<endl;
       }
    }
    return 0;
}
