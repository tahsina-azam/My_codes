#include<bits/stdc++.h>
using namespace std;
vector<long long> v;

void find_minus(){
for(int i=0;;i++){
	long long g=pow(2,i);
	if(g>1000000000){
		break;
	}
	v.push_back(g);
}
}

int main(){
	long long n,sum,minus;
	int t;
    
    find_minus();
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		minus=0;
		for(int j=0;j<=n;j++){
           if(v[j]<=n){
           	minus+=(2*v[j]);
           }
           else{
           	break;
           }
		}
		sum=(n*(n+1))/2;
		sum=sum-minus;
		cout<<sum<<endl;
	}
	return 0;
}