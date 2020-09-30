#include<bits/stdc++.h>
using namespace std;

int find_displacement(int v, int t)
{
	return v*2*t;
}

int main()
{
	int v,t,u,displacement;

	while(scanf("%d%d",&v,&t)!=EOF)
	 {

	 	displacement=find_displacement(v,t);

        printf("%d\n",displacement);
	 }

	 return 0;
}