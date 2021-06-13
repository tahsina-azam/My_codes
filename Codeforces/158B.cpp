#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,dummy=0,car=0,one=0,two=0,three=0,four=0;
    vector<int> v;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>p;
        if(p==1){
            one++;
        }
        else if(p==2){
            two++;
        }
        else if(p==3){
            three++;
        }
        else {
            four++;
        }

    }
    if(three<=one){
        car+=three;
        one-=three;
        three=0;
    }
    else if(one<three){
        car+=three;
        one=0;
        three=0;
    }
     if(two%2==0){
        car+=(two/2);
        two=0;
    }
    else if(two%2!=0) {
        car+=((two-1)/2);
        //cout<<car<<endl;
        two=1;
    }
    if(two*2<=one){
        one-=(two*2);
        //cout<<one<<endl;
         car+=two;
        two=0;

    }
    if(two==1 && one==1){
        car+=1;
        two=0;
        one=0;
    }
    if(one>0){
        car+=((one+3)/4);
        one=0;
    }
    car+=(four+one+two+three);

    cout<<car<<endl;
    return 0;
}
