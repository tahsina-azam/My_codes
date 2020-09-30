#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
	int i,j,k,l,n;
	long double r1,r2,h,p,volume,height,radius;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>r1>>r2>>h>>p;
		height=((r1-r2)/h)*p;
		radius=height+r2;
		volume=(pi/3)*p*(radius*radius+r2*r2+radius*r2);
		cout<<"Case "<<i+1<<": "<<setprecision(12)<<volume<<endl;
	}
	return 0;
}
