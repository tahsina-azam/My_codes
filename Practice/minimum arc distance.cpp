#include<iostream>
#include<cstdio>
#include<math.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
long long int i,j,k,t;
	long double ox,oy,ax,ay,bx,by, area,angle,l,n,m,a,b,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>ox>>oy>>ax>>ay>>bx>>by;
		a=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
	c=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
	angle=((a*a*2)-(c))/(2*a*a);
	angle=acos(angle);
	l=a*angle;
	printf("Case %d: %lf\n",i+1,l);
	}
	return 0;
}
