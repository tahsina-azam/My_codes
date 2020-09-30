#include<bits/stdc++.h>
using namespace std;
std::vector<int> a;
std::vector<int>b;
std::vector<int> c;

void find_ans(int n,int m)
{
        int cnt=0;
        int num;

		for(int j=0;j<n;j++)
		{
          cin>>num;
          a.push_back(num);
		}
		for(int k=0;k<m;k++)
		{
			cin>>num;
			b.push_back(num);
		}

		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(a[j]==b[k])
				{
					b[k]=-3;
					c.push_back(a[j]);
					cnt=1;
					break;
				}
			}
			if(cnt==1)
			{
				break;
			}
		}
		if(c.size()==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			cout<<c.size();
			for(int j=0;j<c.size();j++)
			{
				cout<<" "<<c[j];
			}
             cout<<""<<endl;
		}
         a.clear();
         b.clear();
         c.clear();	
}

int main()
{
	int t,m,n,i;

	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		find_ans(n,m);
	}
	return 0;
}