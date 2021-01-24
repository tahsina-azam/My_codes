#include<bits/stdc++.h>
using namespace std;
std::vector<int> pile;
int main()
{
	int t,n,num,res,sum;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
	    res=0;
	    sum=0;
	    for(int j=0;j<n;j++)
	    {
         cin>>num;
        pile.push_back(num);
	    }

	    for(int k=0;k<n;k++)
	    {
         for(j=0;j<=k;j++)
         {
         	res^=v[i];
         }
	    }

	    cout<<"res"<<i+1<<": "<<res<<" "<<sum<<endl;
	   // if(res%2==0 && sum%2==0 &&)
	}
	return 0;
}