#include<bits/stdc++.h>
using namespace std;
int arr[1010][1010];

int main(){
	int m,n,a,b,q;
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		arr[a][b]=1;
	}
	cin>>q;
	for(int j=0;j<q;j++){
		cin>>a>>b;
		if(arr[a][b]==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
//n=nodes//m=edges
//a b =>edges (there are m)
//q=query
//a b =>(the nodes we wanna check connection)