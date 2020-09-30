#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<unsigned long long> v;
	vector<unsigned long long> s;
	vector<unsigned long long> p;
	unsigned long long i,j,k,l,m,n,sum1=0,sum2=0,sum3=0,q;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	{
		cin>>j;
		sum1=sum1+j;
		v.push_back(j);
	}
	for(i=0;i<m;i++)
	{
		cin>>j;
		sum2=sum2+j;
		s.push_back(j);
	}
	for(i=0;i<k;i++)
	{
		cin>>j;
		sum3=sum3+j;
		p.push_back(j);
	}
	if(sum1==sum2 && sum2==sum3)
	cout<<sum1<<endl;
	
else
{
		for(i=0;i<n;i++)
	{
		sum1=sum1-v[i];
		if(sum1==0)
		{
			cout<<"0"<<endl;
			return 0;
		}
		if(sum1!=sum2)
	{
			for(l=0;l<m;l++)
		{
			sum2=sum2-s[l];
			if(sum2==0)
			{
				cout<<"0"<<endl;
				return 0;
			}
			if(sum1==sum2)
			{
			if(sum2==sum3)
		{
				cout<<sum3<<endl;
				return 0;
		}
			else
			{
					for(q=0;q<k;q++)
				{
					sum3=sum3-p[q];
				if(sum3==sum2)
				{
					cout<<sum3<<endl;
					return 0;
				}
					
				}
			}
			}
		}
	}
	else
	{
		for(q=1;q<k;q++)
				{
					sum3=sum3-p[q];
				if(sum3==sum2)
				{
					cout<<sum3<<endl;
					return 0;
				}
				if(sum3==0)
				cout<<"0"<<endl;	
				}	
	}
	}
}
	return 0;
}
