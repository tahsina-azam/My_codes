#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,7,47,74,447,474,744,444,777,774,747,477};
    int p;
    bool islucky=0;

    cin>>p;
    for(int i=0;i<12;i++){
        if(p%arr[i]==0){
            cout<<"YES"<<endl;
            islucky=1;
            break;
        }
    }
    if(!islucky){
        cout<<"NO"<<endl;
    }
    return 0;
}
