#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,i,j,k,count;

	cin>>k;
	for(int i=0;i<k;i++){
		count=0;
		cin>>a>>b;
		if(a==b){
			cout<<0<<endl;
		}
		else if(b>a){
			j=b-a;
			
             if(j%10==0){
             	cout<<j/10<<endl;
             }
             else{
             	cout<<(j/10)+1<<endl;
             }
		}
		else{
			j=a-b;
			 if(j%10==0){
             	cout<<j/10<<endl;
             }
             else{
             	cout<<(j/10)+1<<endl;
             }
			
		}
	}
	return 0;
}