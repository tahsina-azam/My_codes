#include<bits/stdc++.h>
using namespace std;

int main(){
	long long i,k,l,m,x,y,t,count;
    double j,q;
    cin>>t;
    for(i=0;i<t;i++){
    	count=1;
        cin>>x>>y>>k;
        l=ceil((k*y+k-x)/(double)(x-1));
       /* j=(double)l-(double)x;
        q=(j/(x-1));
        cout<<q<<"=j"<<endl;
        
         if(q==floor(q)){
            cout<<(m+k+1)<<endl;
         }*/
         
         	
         	 cout<<(l+k+1)<<endl;
        
       
    }

return 0;
}