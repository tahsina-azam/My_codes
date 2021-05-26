#include<bits/stdc++.h>
using namespace std;
long long arr[100009];

int main(){
    long long n,p;
    int i=0;
    int cnt=1,ans=0;

    cin>>n;
    while(n--){
        cin>>arr[i];
        if(i>0 && arr[i]>=arr[i-1]){
            cnt++;
            //cout<<cnt<<endl;
        }
        else{
           ans=ans>cnt?ans:cnt;
           cnt=1;
        }
        i++;
        ans=ans>cnt?ans:cnt;
    }
    cout<<ans<<endl;
    return 0;
}
