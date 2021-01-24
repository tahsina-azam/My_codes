#include<stdio.h>
#include<math.h>

  int main()
  {
   double ha,hb,hc,a,b,c,area,d,p;
  int i,j,k,n,count=0;
  scanf("%d",&n);
  for(i=0; ;i++)
 {
   scanf("%lf%lf%lf",&ha,&hb,&hc);
  a=1/ha;
  b=1/hb;
  c=1/hc;
  d=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
  if(d<=0)
  {
    printf("These are invalid inputs!\n");
    count++;
  }
  else if(ha<=0 || hb<=0 || hc<=0)
  {
      printf("These are invalid inputs!\n");
    count++;
  }
  else
  {
   p=1/d;
   area=sqrt(p);
   printf("%0.3lf\n",area);
  }
  if(count==n)
    break;
 }
 return 0;
  }

