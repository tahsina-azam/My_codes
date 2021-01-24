#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
int main()
{
 long long x,y,z;
  double xo,yo,zo,l,m,n,o,p,r1,r2,a1,a2,a3;
while(scanf("%lld%lld%lld",&x,&y,&z)!=EOF)
{
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
	printf("%0.4lf %0.4lf %0.4lf\n",a2,a3,a1);
}
 return 0;
}
