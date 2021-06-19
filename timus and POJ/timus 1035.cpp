#include<bits/stdc++.h>
using namespace std;

int main(){
    long long X,Y,C;

    cin>>X>>Y>>C;

    if(X+Y<C){
        cout<<"Impossible"<<endl;
    }
    else if(X+Y == C){
       cout<<X<<" "<<Y<<endl;
    }
    else if(X==0){
        cout<<0<<" "<<C<<endl;
    }
    else if (Y==0){
        cout<<C<<" "<<0<<endl;
    }
    else if(X >=C ){
        cout<<C<<" "<<0<<endl;
    }
    else if( Y>=C){
        cout<<0<<" "<<C<<endl;
    }
    else if(X >= Y){
        cout<<X<<" "<<C-X<<endl;
    }
    else{
        cout<< C-Y<<" "<<Y<<endl;
    }
    return 0;
}
