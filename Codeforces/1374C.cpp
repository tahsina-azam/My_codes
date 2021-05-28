#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,cnt,ans;
    vector<char> v;
    char ch;

    cin>>t;
    while(t--){
            cnt=0;
            ans=0;

        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ch;
            v.push_back(ch);
        }
        for(int i=0;i<n;i++){
            if(v[i]=='('){
                cnt++;
               }
            else{
                if(cnt!=0){
                    cnt--;
                }
                else{
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
        v.clear();

    }
}


