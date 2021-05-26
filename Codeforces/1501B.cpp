#include<bits/stdc++.h>
using namespace std;


int main(){
    unsigned long long t,length,n;
    int a;
    vector<int> v;
    vector<pair<int,int> > arr;

    cin>>t;
    while(t--){
        cin>>n;

       for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                int p=i;
            int layer=v[i];
            int q=i-layer+1;
            if(q<0){
                q=0;
            }
             arr.push_back({q,i});
             //cout<<q<<" "<<i<<endl;

            }
        }

        sort(arr.begin(),arr.end());

       /* for(int i=0;i<arr.size();i++){
            cout<<arr[i].first<<" "<<arr[i].second<<endl;
        }*/

        int cnt=0;
        for(int i=0;i<n;i++){
                bool is=false;

            for(int j=cnt;j<arr.size();j++){
                if(i>=arr[j].first && i<=arr[j].second){
                    cout<<"1 ";
                    is=true;
                    break;
                }
                if(i>arr[j].second){
                    cnt++;
                }
                if(arr[j].first>i){
                    break;
                }

            }

            if(!is){
                cout<<"0 ";
            }
        }
        cout<<endl;
        v.clear();
        arr.clear();
    }
    return 0;
}

