#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count;
	long long r,g,b,w,zero;
	std::vector<long long> v;

	cin>>t;
	for(int i=0;i<t;i++)
     {
     	count=0;
     	zero=0;

     	cin>>r>>g>>b>>w;
     	v.push_back(r);
     	v.push_back(g);
     	v.push_back(b);
     	v.push_back(w);
     	sort(v.begin(),v.end());
        for(int j=0;j<4;j++)
        {
        	if(v[j]==0)
        		zero++;
        }
     	if(r%2==0 && r!=0)
     	{
     		count++;
     	}
     	if(g%2==0 && g!=0)
     	{
     		count++;
     	}
     	if(b%2==0 && b!=0)
     	{
     		count++;
     	}
     	if(w%2==0 && w!=0)
     	{
     		count++;
     	}
     	if(zero==4)
     	{
     		cout<<"Yes"<<endl;
     	}
        else if(zero!=0 && count==0 )
        {
        	cout<<"No"<<endl;
        }
        else if(w==0 && count==0)
        {
        	cout<<"No"<<endl;
        }

        else
        {
        	cout<<"Yes"<<endl;
        }
       
     }
     return 0;
}