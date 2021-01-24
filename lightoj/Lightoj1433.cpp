#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
    double ox,oy,ax,ay,bx,by,oa,ab,s,r,angle;
    int t;
    cin>>t;
    for (int i=1; i<=t; i++) {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        oa=sqrt(((ax-ox)*(ax-ox))+((ay-oy)*(ay-oy))); 
        r = oa; 
        ab=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay))); 

        angle = acos(((r*r)+(r*r)-(ab*ab))/(2*r*r));
        printf("Case %d: %lf\n",i,angle*r);
    }

    return 0;
}


