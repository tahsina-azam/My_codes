#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,n,j,k,d,q,m;
	int array[200];

	cin>>t;

	for(int i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			cin>>array[j];
			
		}
		for(int j=n-1;j>=0;j--){
            cout<<array[j]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}