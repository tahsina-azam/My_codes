#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	string st_final="";
	vector<string> v;
	int n,l;
	
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>str;
		v.push_back(str);
	}
	sort(v.begin(),v.end());
	for(const auto& v_: v){
		st_final+=v_;
	}
	cout<<st_final<<endl;
	return 0;
}
