#include<stdio.h>
int main()
{
    double a,b,c,d,ara[25];
    int T,i,k,j,l;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        ara[i]=a*(sqrt(d/(d+1)));
    }
    for(i=0;i<T;i++)
    {
        printf("Case %d: %lf\n",(i+1),ara[i]);
    }
    return 0;
}
