#include<bits/stdc++.h>
using namespace std;

bool findAns(){
    string s;
    int cnt=0;
    vector<int> d(3);

    cin>>s;
    int x=s[0]-'A';
    int y=s.back()-'A';
    if(x==y){
        return false;
    }
    d[x]=1;
    d[y]=-1;

    if(count(s.begin(),s.end(),'A'+x)==s.size()/2){
        d[3^x^y]=-1;
    }
    else{
         d[3^x^y]=1;
    }

    for(char ch: s){
        cnt+=d[ch-'A'];
        if(cnt<0){
            return false;
        }
    }
    if(cnt!=0){
        return false;
    }
    return true;
}


int main()
{
    int n;

    cin>>n;
    while(n--){
        cout<<(findAns()? "YES\n" : "NO\n");
    }
    return 0;
}
