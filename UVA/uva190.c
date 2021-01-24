#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,k;
  double ax,ay,bx,by,cx,cy,x,y,z,o,p,q,r,a,b,c,d,m;
  while(scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy)!=EOF)
  {
    x=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
  y=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy));
  z=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
  	o=(x+y+z)*(x+y-z)*(x+z-y)*(y+z-x);
	o=sqrt(o);
	d=(x*y*z)/o;
p=2*(bx-ax);
q=2*(by-ay);
r=ax*ax+ay*ay-bx*bx-by*by;
a=2*(bx-cx);
b=2*(by-cy);
c=cx*cx+cy*cy-bx*bx-by*by;
x=(q*c-b*r)/(p*b-a*q);
y=(a*r-p*c)/(p*b-a*q);
m=(x*x)+(y*y)-d*d;
char c1, c2, c3;
        if(x >= 0)    c1 = '-';
        else    c1 = '+';
        if(y >= 0)    c2 = '-';
        else    c2 = '+';
        if(d*d-x*x-y*y >= 0)
            c3 = '-';
        else    c3 = '+';
        printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n", c1, fabs(x), c2, fabs(y),d);
        printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n", c1, fabs(2*x), c2, fabs(2*y), c3, fabs(d*d-x*x-y*y));
        puts("");
  }
  return 0;
}
