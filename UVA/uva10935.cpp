#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> q;
	vector<int> v;
	int i,n,j,k,count,c;
while(1)
	{
		count=0;
		c=0;
		cin>>n;
		if(n==0)
		return 0;
		else if(n==1)
		{
		cout<<"Discarded cards:"<<endl;
		cout<<"Remaining card: 1"<<endl;	
		}
else
{
		for(j=1;j<=n;j++)
	q.push(j);
	
	while(!q.empty())
	{
		v.push_back(q.front());
		++c;
		q.pop();
		q.push(q.front());
		q.pop();		
			}
		
		cout<<"Discarded cards: ";
		for(k=0;k<c-2;k++)
		cout<<v[k]<<", ";
		cout<<v[c-2]<<endl;
		cout<<"Remaining card: "<<v[c-1]<<endl;
	v.clear();
	while(!q.empty())
	{
		q.pop();
	}
}
	}
	return 0;
	
}


