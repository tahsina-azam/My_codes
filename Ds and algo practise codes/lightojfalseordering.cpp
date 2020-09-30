#include<bits/stdc++.h>
using namespace std;

vector< pair<int , int > > v;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
	
    	if(a.first<b.first)
    	{
    		return 1;
    	}
    	else if(a.first==b.first)
    	{
    		if(a.second>b.second)
    		{
    			return 1;
    		}
    		else
    		{
    			return 0;
    		}
    	}
    	else
    	{
    		return 0;
    	}
} 

void find_divisors(int n)
{
	int cnt=0;

	if(n==1)
	{
		v.push_back({1,1});
	}

	else
	{
		for(int k=1;k<=n/2;k++)
	 {
       if(n%k==0)
         {
         	cnt++;
         }
	 }
	 v.push_back({cnt+1 , n});
	}
	return;
}

int main()
{
	int i,j,n,T,cnt=1;

    for(i=1;i<=1000;i++)
     {
      find_divisors(i);
     }
     
     sort(v.begin(), v.end(), sortbysec) ;
     for(int k=0;k<1000;k++)
     {
     	cout<<v[k].first<<" "<<v[k].second<<endl;
     }

     scanf("%d",&T);

     for(j=0;j<T;j++)
     {
     	scanf("%d",&n);
     	printf("Case %d: %d\n",cnt++,v[n-1].second );
     }

     return 0;
}