#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long m,n,t,i,j,k,l;

    scanf("%llu",&t);

    for(i=0; i<t; i++)
    {
        scanf("%llu%llu",&n,&m);

        k=n*m;
        l=n*(m-1)+m*(n-1);

        if(k==l)
        {
            printf("YES\n");
        }
        else if(m==1 || n==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
