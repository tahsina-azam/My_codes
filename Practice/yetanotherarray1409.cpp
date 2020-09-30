#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,n,x,y,p,i,j,k;
	
	cin>>k;
	while(k--){
		cin>>n>>x>>y;
		j=y-x;
		std::vector<long long> ans;
		for(i=1;i<=j;i++){
			if ((y - x) % i != 0) continue;
			bool foundx=false;
			long long need=n;
			long long cur=y;
			std::vector<long long> res;
			while(cur>0 && need>0){
				res.push_back(cur);
				if(cur==x){
					foundx=true;
					//cout<<x<<"cur="<<i<<endl;
				}
				cur-=i;
				need--;
			}

			cur=y;
			while (need>0){
				cur=cur+i;
				res.push_back(cur);
				need--;
			}
			sort(res.begin(),res.end());

			if(need==0 && foundx){
                 
			

				if(ans.empty() || res.back()<ans.back()){
					ans=res;
				}
				
			}
			
		}

		assert(!ans.empty());
		for(auto it:ans){
			cout<<it<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}