#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,i,j,k,l,count,tt,c,e;
	string s;
vector<int> v;
vector<int> d;
vector<int>p;
	cin>>t;
	for(i=0;i<t;i++)
	{
		count=0;
	cin>>n>>m;
	for(j=0;j<m;j++)
	{
		cin>>s;
		if(s=="pushLeft")
		{
			cin>>k;
			if(count<n)
			{
			d.push_back(1);
			p.push_back(k);
				count++;
			v.insert(v.begin(),k);
			}
			else
			d.push_back(6);
		
		}
		
		else if(s=="pushRight")
		{
			cin>>k;
			if(count<n)
			{
				d.push_back(2);
				p.push_back(k);
				count++;
				l=0;
				v.push_back(k);
			}
			else
			d.push_back(6);
		
		}
		
	else if(s=="popLeft")
	{
	if(count!=0)
	{
		d.push_back(3);
		p.push_back(v.front());
			count--;
			l=0;
			v.erase(v.begin());
			
		}	
		else
		{
			d.push_back(5);
		}
	
	}
	else if(s=="popRight")
		{
				if(count!=0)
	{
		d.push_back(4);
		p.push_back(v.back());
			count--;
			l=0;
			v.pop_back();
		}	
		else
		{
			d.push_back(5);
		}
	}


	s.clear();

}
c=-1;
	cout<<"Case 1:"<<endl;
	for(tt=0;tt<d.size();tt++)
	{
		if(d[tt]==1)
			cout<<"Pushed in left: "<<p[++c]<<endl;
			else if(d[tt]==2)
			cout<<"Pushed in right: "<<p[++c]<<endl;
			else if(d[tt]==3)
			cout<<"Popped from left: "<<p[++c]<<endl;
			else if(d[tt]==4)
			cout<<"Popped from right: "<<p[++c]<<endl;
			else if(d[tt]==5)
			cout<<"The queue is empty"<<endl;
			else 
			cout<<"The queue is full"<<endl;	
		
	}
		v.clear();
			d.clear();
			p.clear();
			s.clear();
	}
	return 0;
}
