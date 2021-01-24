#include<bits/stdc++.h>
using namespace std;

int main(){
   long long n,cnt=0,x=0,y=0,a=0,b=0,first,second;
   vector<char> cockroach;
   char color;

   cin>>n;
    for(int i=0;i<n;i++){
   	     cin>>color;
   	     cockroach.push_back(color);
        if(i%2==0){
    	     if(cockroach[i]!='r'){
    		    x++;
    	    }
        }
        else {
    	     if(cockroach[i]!='b'){
    		     y++;
    	    }
        }
        first=max(x,y);
        
        if(i%2==0){
    	    if(cockroach[i]!='b'){
    		    a++;
    	    }
        }
        else {
    	    if(cockroach[i]!='r'){
    		     b++;
    	    }
        }
   	    second=max(a,b);
    }
   cout<<min(first,second)<<endl;
   return 0;
}