#include <stdio.h>
#include <math.h>
#define  pi acos(-1)
int main()
{
    int l,w,h,t;
    double d,v;
    while(scanf("%d %d %d %d",&l,&w,&h,&t)==4)
    {
        d=l*tan(t*pi/180.0);
        if(d > h) v=0.5*h*h*l*w/d;
        else v=l*w*((h)-(d*0.5));
        printf("%.3lf mL\n", v);
    }
    return 0;
}
