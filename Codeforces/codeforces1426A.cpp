#include<bits/stdc++.h>
using namespace std;

void find_ans(int n,int x){
	if(n==1 || n==2){
		cout<<1<<endl;
	}
	else{
		int p=ceil((n-2)/(double)x);
		cout<<p+1<<endl;
	}
}

int main(){
	int t,n,x;

	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>x;
		find_ans(n,x);
	}
	return 0;
}