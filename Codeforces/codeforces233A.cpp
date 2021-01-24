#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j;

cin>>n;	
    if(n%2!=0)
    {
     cout<<"-1"<<endl;
    }
    else
    {
    	for(i=2;i<=n;i+=2)
    	{
    		if(i==n)
    		{
    			cout<<i<<" "<<i-1<<endl;
    		}
    		else
    		{
    			cout<<i<<" "<<i-1<<" ";
    		}
    	}
    	
    }
    return 0;
}