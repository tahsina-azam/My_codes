#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{

  int i,j,k,l;
  double a,b,c,m,n;
  b=sin((108*pi)/180);
  c=sin((63*pi)/180);
  while (scanf("%lf",&a)!=EOF)
  {
    m=a*b/c;
    printf("%0.10lf\n",m);
  }
  return 0;
}
