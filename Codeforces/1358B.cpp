#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,num;
    vector<int> gran;

    cin>>t;
    while(t--){
          num=1;
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>a;
            gran.push_back(a);
        }
        sort(gran.begin(),gran.end());
        for(int i=n-1;i>=0;i--){
               if(gran[i]<=i+1){
                num=i+2;
                break;
               }

        }
        cout<<num<<endl;
        gran.clear();
    }
    return 0;
}
