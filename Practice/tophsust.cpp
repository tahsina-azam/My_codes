#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	long long n;
	long long count;
    
    cin>>T;
    for(int k=0;k<T;k++)
    {
    	count=0;
    	cin>>n;
    	for(auto i=0;i<=n/2;i++)
    {
    	for(auto j=n/2;j<=n;j++)
    	{
    		if((i|j)==n)
                {  
                cout<<i<<" "<<j<<endl;            
                	count+=2;
                }
    	}
    }
    cout<<count+1<<endl;
    }    
    return 0;
}