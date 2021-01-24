#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,first,second,lcm,p,q;
	int max;

	cin>>a>>b>>c;

if(a==1 && a==b && b==c)
{
	cout<<"12"<<endl;
	return 0;
}

	max=(a>b)?a:b;
	first=max;
	while(1)
	{
		if(first%a==0 && first%b==0)
		{
			break;
		}
		first+=max;
	}

	 max=(first>c)?first:c;
	 second=max;
	 while(1)
	 {
	   p=second/a;
	 	  q=second/b;
	 	if(second%first==0 && second%c==0 && p*q==c)
	 	{
	 		break;
	 	}
	 	second+=max;
	 }

	 a=second/a;
	 b=second/b;
	 c=second/c;
	int ans=4*a+4*b+4*c;
	cout<<ans<<endl;
	 return 0;

}
