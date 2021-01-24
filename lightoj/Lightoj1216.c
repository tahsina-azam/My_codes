#include <stdio.h>
    #include <math.h>
    #define PI acos(-1)
    int main()
        {
        int n,i,r1,r2,h,p;
        double R,R2,V;
        scanf("%d",&n);

        for(i =0; i<n; i++) {
                scanf("%d%d%d%d",&r1,&r2,&h,&p);
                R = r2+ (r1-r2)*((double)(p)/h);
                V = ((PI*p)*(R*R+R*r2+r2*r2))/3.0;
                printf("Case %d: %lf\n",i+1,V);


                }
        return 0;


        }
