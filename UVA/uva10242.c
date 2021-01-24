#include<stdio.h>
int main()
{

int i,j,k;
double  x1,x2,x3,x4,y1,y2,y3,y4,x,y;
while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF)
{
  if(x1==x3 && y1==y3)
  printf("%0.3lf %0.3lf\n",x2+x4-x1,y2+y4-y1);
  else if(x1==x4 && y1==y4)
printf("%0.3lf %0.3lf\n",x2+x3-x1,y2+y3-y1);
else if(x2==x3 && y2==y3)
  printf("%0.3lf %0.3lf\n",x1+x4-x3,y1+y4-y3);
else
  printf("%0.3lf %0.3lf\n",x1+x3-x4,y1+y3-y4);
}
 return 0;
}
