#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    map<string,int> wordcnt;
    long long n;
    string str,mstr="";

    cin>>n;
    for(int tt=0;tt<n;tt++){
        cin>>str;
      if (!(s.find(str) != s.end())) {
          s.insert(str);
          wordcnt[str]=0;
          cout<<"OK"<<endl;
      }
      else{
        mstr+=(str+to_string(++wordcnt[str]));
        cout<<mstr<<endl;
        s.insert(mstr);
        wordcnt[mstr]=0;
        mstr="";
      }
    }
    return 0;
}
