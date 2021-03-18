#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,p;
	vector<int> v;
	vector<int> ans;
	vector<int> leftover;
	
	cin>>t;
    while(t--){
    	cin>>n;
    		for(int i=0;i<n;i++){
		cin>>p;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	ans.push_back(v[0]);
	for(int i=1;i<n;i++){
		if(v[i-1]==v[i]){
			leftover.push_back(v[i]);
		}
		else{
			ans.push_back(v[i]);
		}
	}
	for(int j=0;j<leftover.size();j++){
		ans.push_back(leftover[j]);
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	leftover.clear();
	ans.clear();
	v.clear();
	}
	return 0;
}

sheevamoshimoshi21
