#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,count;
	int T,N,w;
	vector<int> x;
	vector<int> y;
	cin>>T;
	for(i=0;i<T;i++)
	{
		count=1;
		cin>>N>>w;
		for(j=0;j<N;j++)
		{
			cin>>m>>n;
			x.push_back(m);
			y.push_back(n);	
		}
		sort(y.begin(),y.end());
		for(k=0;k<N-1;k++)
		{
		for(l=1;l<N-k;l++)
		{
			if(k+l>N)
		break;
			if(y[k+l]-y[k]>w)
			{
			k=k+l-1;	
			count++;
			break;
			}
		}
		
		}
		cout<<"Case "<<i+1<<": "<<count<<endl;
		x.clear();
		y.clear();
	}
	return 0;
}
