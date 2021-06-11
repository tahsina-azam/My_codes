#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,p,answer=0;
    vector<int> vec,ans;

    cin>>n>>k;
    while(n--){
        cin>>p;
        vec.push_back(p);
    }

    ans.push_back(vec[0]);

    for(int i=1;i<vec.size();i++){
            ans.push_back(max(vec[i],k-ans[i-1]));
        answer+=(ans[i]-vec[i]);
    }
    cout<<answer<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
