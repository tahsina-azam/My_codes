#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,bx,by,a,b,p=1,q=1;
	long long sumx=0,sumy=0;
	std::vector<long long> x;
	std::vector<long long> y;

	cin>>n>>bx;
	for(int i=0;i<n;i++){
		cin>>a;
		x.push_back(a);
    }
    cin>>m>>by;
    for(int i=0;i<m;i++){
    	cin>>b;
    	y.push_back(b);
    }
    
    for(int j=x.size()-1;j>=0;j--){
        sumx+=(x[j]*p);
        p*=bx;
    }
    for(int j=y.size()-1;j>=0;j--){
    	sumy+=(y[j]*q);
    	q*=by;
    }
    
    if(sumx==sumy){
    	cout<<"="<<endl;
    }
    else if (sumx>sumy){
    	cout<<">"<<endl;
    }
    else{
    	cout<<"<"<<endl;
    }
    return 0;
}
  
