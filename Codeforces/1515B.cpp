#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,temp;
    cin>>t;
    while(t--){
            bool isyes=false;

        cin>>n;
        if(n%2!=0){
          cout<<"NO"<<endl;

        }
        else{
            if(n%4==0){
           temp=n/4;
           p=sqrt(temp);
           if((p*p*4)==n){
            cout<<"YES"<<endl;
            isyes=true;
           }
        }
        if(!isyes){
            temp=n/2;
            p=sqrt(temp);
            if((p*p*2)==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        }


    }
       return 0;
}
