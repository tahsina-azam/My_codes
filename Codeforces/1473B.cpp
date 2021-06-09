#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    string str,stri;
    int t,first,second;
    bool match=1;

    cin>>t;
    while(t--){
        cin>>str>>stri;

        first=str.size()>stri.size()?str.size():stri.size();
        second=str.size()>stri.size()?stri.size():str.size();
        match=1;

            string p=str.size()>stri.size()?str:stri;
            string q=str.size()>stri.size()?stri:str;


                int lc = (first*second)/gcd(first,second);
                int s=lc/second;
                int g=lc/first;
                string dummy1="";
                string dummy2="";

                while(s--){
                    dummy1+=q;
                }
                while(g--){
                    dummy2+=p;
                }
                if(dummy1==dummy2){
                    cout<<dummy1<<endl;
                }
                else{
                    cout<<-1<<endl;
                }


    }
    return 0;
}
