#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,x,y,i,j,k,n,t,p,ans1,ans2;

	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b>>x>>y>>n;
		if(a==b){
			if(x>y){
				p=a;
				a=b;
				b=p;
			}
		}
		
			if((b-y)>=n){
				//cout<<a*(b-n)<<endl;
				ans1=a*(b-n);
			}
			else{
                p=n-(b-y);
                if(a-p>=x){
                	//cout<<(a-p)*y<<endl;
                	ans1=(a-p)*y;
                }
                else{
                	//cout<<x*y<<endl;
                	ans1=x*y;
                }
			}
			
			
				if((a-x)>=n){
				//cout<<b*(a-n)<<endl;
					ans2=b*(a-n);
			}
			else{
                p=n-(a-x);
                if(b-p>=y){
                	//cout<<(b-p)*x<<endl;
                	ans2=(b-p)*x;
                }
                else{
                	//cout<<x*y<<endl;
                	ans2=x*y;
                }
                
			}
			cout<<min(ans1,ans2)<<endl;
			
	}
	return 0;
}