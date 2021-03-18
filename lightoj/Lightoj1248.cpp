#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k=1;
	
	cin>>t;
	while(t--){
		cin>>n;
		double ans=1;
		for(int i=2;i<=n;i++){
			ans+=1.0/ i;
		}
		printf("Case %d: %.10lf\n",k++,ans * n);
	}
	return 0;
}
