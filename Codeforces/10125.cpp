#include<bits/stdc++.h>
using namespace std;

std::vector<long long> v;

long long find_ans()
{
	sort(v.begin(),v.end(),greater<long long>());
	for(int i=0;i<v.size()-3;i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			for(int k=i+2;k<v.size();k++)
			{
				if(i==j)
				{
					continue;
				}
				for(int l=i+3;l<v.size();l++)
				{
                   if(i==l || k==l)
                   {
                   	continue;
                   }
                   if(v[j]+v[k]+v[l]==v[i])
                   {

                     return v[i];
                   
                   }
				}
			}
		}
	}
return 0;
}
int main()
{
	unsigned long long i,j,k,l,n;
	long long S,first;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
      for(i=0;i<n;i++)
      {
      	cin>>S;
      	v.push_back(S);
      }
      first=find_ans();
      if(first!=0)
      cout<<first<<endl;
      else
      {
      	cout<<"no solution"<<endl;
      }
      v.clear();
	}
	return 0;

}