#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
int main()
{
    double D,V;
    while(scanf("%lf%lf",&D,&V))
    {
       if(D==0 && V==0)
      break;
        printf("%.3f\n",pow(D*D*D-V*6./PI,1/3.0));
    }
    return 0;
}
