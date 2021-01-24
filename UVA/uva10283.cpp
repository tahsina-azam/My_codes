#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    double R, n, theta, r, midR, area_midR, blue, green, triangleArea, sectorArea;
    string s;
    while(cin>>R>>n)
    {
        if(n==1)
        {
            cout<<R<<" "<<0.0<<" "<<0.0<<"\n";
            continue;
        }
        theta=180.0/n;
        r = R*(sin(theta*PI/180.0)) / (1+sin(theta*PI/180.0));

        midR = R-r;

        triangleArea = midR*cos(theta*PI/180.0)*r;
        sectorArea = (90-theta) / 180 * PI * r * r;
        blue = n*(triangleArea - sectorArea);
        green = PI*R*R - n*PI*r*r - blue;
        cout<<setprecision(10)<<fixed<<r<<" "<<blue<<" "<<green<<"\n";
    }
return 0;
}
