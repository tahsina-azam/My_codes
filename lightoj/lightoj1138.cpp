#include<bits/stdc++.h>
using namespace std;

int find_fives_in_num(int a){
    int temp=0;

    while(a){
        temp+=a/5;
        a/=5;
    }
    return temp;
}

int main(){
    int T,Q,casenum=1;

    cin>>T;
    while(T--){
        cin>>Q;

    int start=0,endi=10000000000,mid;
    int ans=0;

      while(start<=endi){
        int mid=(start+endi)/2;
        int cnt=find_fives_in_num(mid);

         if(cnt==Q){
            ans=mid;
            endi=mid-1;
        }
        else if(cnt<Q){
            start=mid+1;
        }
        else{
            endi=mid-1;
        }

       }
       if(!ans){
        printf("Case %d: impossible\n",casenum++);
       }
       else{
        printf("Case %d: %d\n",casenum++,ans);
       }

    }
    return 0;
}
