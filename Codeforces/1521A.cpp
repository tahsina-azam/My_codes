#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a,b,t,good,nrgood,nrlygood;
    cin>>t;
    while(t--){
        cin>>a>>b;
        good=a*b;


        if(b==1){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
          nrlygood=a;
          nrgood=good+nrlygood;
          cout<<good<<" "<<nrlygood<<" "<<nrgood<<endl;
        }
    }
    return 0;
}
