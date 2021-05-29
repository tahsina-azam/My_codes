#include<bits/stdc++.h>
#include<string>
using namespace std;
int ans;

void find_substr(string str, int n, string demo){
    string s="";
    ans=0;
   for (int len = 1; len <= n; len++){
      for (int i = 0; i <= n - len; i++){
         int j = i + len - 1;
         for (int k = i; k <= j; k++){
              //cout << str[k];
              s+=str[k];
         }
         if (demo.find(s) != std::string::npos) {
            ans=ans>s.size()?ans:s.size();
            //cout<<ans<<endl;
         }
         //cout <<s<< endl;
         s="";
      }
   }
}


int main(){
    int t,p,q,finalAns;
    string a,b;

    cin>>t;
    while(t--){
            ans=0;

        cin>>a>>b;
        find_substr(a,a.size(),b);
        finalAns=(a.size()-ans)+(b.size()-ans);

        cout<<finalAns<<endl;

    }

  return 0;
}
