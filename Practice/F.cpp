#include<bits/stdc++.h>
#define pi 2*acos(0)
using namespace std;
int main()
{
	int i,j,k;
	double x,y,z,xo,yo,zo,l,m,n,o,p,r1,r2,a1,a2,a3;
	cin>>x>>y>>z;
	p=(x+y+z);
	l=p/2;
	m=l*(l-x)*(l-y)*(l-z);
	n=sqrt(m);
	r1=(2*n)/p;
	o=(x+y+z)*(x+y-z)*(x+z-y)*(y+z-x);
	o=sqrt(o);
	r2=(x*y*z)/o;
	a1=pi*r1*r1;
	a2=	(pi*r2*r2)-n;
	a3=n-a1;
	cout<<setprecision(7)<<a2<<" "<<setprecision(5)<<a3<<" "<<setprecision(5)<<a1<<endl;
	return 0;
}
