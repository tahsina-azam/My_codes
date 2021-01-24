#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,x,y,cnt=0;

	cin>>a>>b>>c;
	for(int i=0;i<=c;i++){
         y=c-(b*i);
         if(y<0){
         	break;
         }
         if(y%a==0){
         	cout<<"YES"<<endl;
         	cnt=1;
         	break;
         }
         
	}
	if(cnt==0){
		cout<<"NO"<<endl;
	}
	return 0;
}