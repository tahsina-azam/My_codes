#include<bits/stdc++.h>
using namespace std;
vector<int> v[100010];
int visited[100010];

void dfs(int node){
	visited[node]=1;
	for(int child:v[node]){
		if(!visited[child]){
			dfs(child);
		}
	}
}

int main(){
	int n,m,k,i,j,a,b,cc=0;
	memset(visited,0,sizeof visited);
	cin>>n>>m>>k;
	for(i=0;i<m;i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for(int i=1;i<n;i++){
		if(!visited[i]){
           dfs(i);
           cc++;
		}
	}
	if(cc>k){
		cout<<"-1"<<endl;
	}
	else{
		cout<<(m-n+k)<<endl;
	}
	return 0;
}