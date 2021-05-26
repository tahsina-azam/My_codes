#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,other,first,sub;
    string str;
    char c;

    cin>>t;
    while(t--){
        cin>>str;
        if(str[0]==str[str.size()-1]){
            cout<<"NO"<<endl;
            continue;
        }
        char c=str[0];
        other=0;
        first=0;
        sub=0;
        bool flag=1;

        for(int i=0;i<str.size();i++){
            if(str[i]==c){
                first++;
                sub++;
            }
            else{
                other++;
                sub--;
            }

            if(sub<0){
                cout<<"NO"<<endl;
                flag=0;
                break;
            }

        }

        //cout<<"other" <<other<<endl;
        if(other!=str.size()/2 && flag){
            cout<<"NO"<<endl;

        }
        else if(flag){
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
