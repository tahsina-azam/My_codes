#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,a,b,c,d,p;
	cin>>t;
	for(int i=0;i<t;i++){
		p=0;
		cin>>n>>m;
		for(int j=0;j<n;j++){
			cin>>a>>b>>c>>d;
			if(b==c){
				p=1;
			}
			
		}
		if(p!=1){
            cout<<"NO"<<endl;
		}
		else if((m*m)%4!=0){
			 cout<<"NO"<<endl;
		}
		else{
		    	cout<<"YES"<<endl;
		}
		   
	}
	return 0;
}
	
