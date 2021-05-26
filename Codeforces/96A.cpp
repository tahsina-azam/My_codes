#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int zero=0;
    int one=0;
    bool play=0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            one++;
            zero=0;
        }
        else{
            zero++;
            one=0;
        }
        if(one==7 || zero==7){
            cout<<"YES"<<endl;
            play=1;
            break;
        }
    }
    if(!play){
        cout<<"NO"<<endl;
    }
    return 0;
}
