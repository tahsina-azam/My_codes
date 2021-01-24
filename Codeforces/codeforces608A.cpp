#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<long long,long long> > p;
	long long i,j,n,s,a,b,floor,time;

	cin>>n>>s;
	for(i=0;i<n;i++){
		cin>>a>>b;
		p.push_back({a,b});
	}
	sort(p.begin(),p.end());
     floor=s;
     time=0;
	for(j=n-1;j>=0;j--){
        if(p[j].first==floor){
              time=max(time,p[j].second);

        }

        else{

        	if(p[j].second<=time){
        		time+=(floor-p[j].first);
                 floor=p[j].first;
        	}
        	else{
        		time+=max((floor-p[j].first),(p[j].second-time));
        		floor=p[j].first;
        	}
        }
	}
 cout<<time+p[0].first<<endl;
 return 0;
}