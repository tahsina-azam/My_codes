#include<bits/stdc++.h>
using namespace std;
bool mark[15]={};

bool digit(int n){
	while(n){
		int f=n%10;
		n/=10;
		if(mark[f]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,k;
	int p;
	
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>p;
		mark[p]=1;
	}
	while(1){
		if(digit(n)){
			break;
		}
		n++;
	}
	cout<<n<<endl;
	return 0;
}

