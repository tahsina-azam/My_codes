#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long k,n,i,j;
    cin>>n>>k;
    if(n%2==0){
        i=n/2;
    }
    else{
        i=(n+1)/2;
    }
    if(k<=i){
        cout<<2*k-1<<endl;
    }
    else{
        cout<<2*(k-i)<<endl;
    }
    return 0;
}
