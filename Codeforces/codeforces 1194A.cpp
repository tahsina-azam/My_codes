#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	cin>>l;
	for(i=0;i<l;i++)
	{
		cin>>j>>k;
		n=0;
		for(m=1;m<=k;m++)
		{
			n=n+2;
		}
		cout<<n<<endl;
	}
	return 0;
}
