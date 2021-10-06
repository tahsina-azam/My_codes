#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    vector<int> ans;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        int first=0,last=s.size(),posr=0;
        int fr=0, lr=0;

        for(int j=0;j<s.size();j++){
            if(s[j]=='R'){
                   // cout<<j<<endl;
                ans.push_back((j+1-posr));
                posr=j+1;
            }
        }
        if(posr!=0){
            ans.push_back(last-(posr-1));
        }
        else{
            ans.push_back(s.size()+1);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        cout<<ans[0]<<endl;
        ans.clear();
    }
    return 0;
}
