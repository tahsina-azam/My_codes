#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j,t,q,p,k,cnt,num=1;
	char ch;
	vector<int> v;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&q);
		//printf("n=%d q=%d",n,q);
		v.clear();
		
		printf("Case %d:\n",num++);
		while(n--){
			scanf("%d",&m);
			v.push_back(m);
		}
		while(q--){
			getchar();
            char ch;
			scanf("%c",&ch);
			if(ch=='a'){
				scanf("%d",&p);
				v.push_back(p);
			}
			else{
				scanf("%d",&k);
				if(v.size()>=k){
					//cout<<"size:"<<v.size()<<endl;
                printf("%d\n",v[k-1]);
                v.erase(v.begin()+k-1);
                }
                else{
                	printf("none\n");
				}
					
			}
		}
	}
	return 0;
}
