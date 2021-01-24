#include<bits/stdc++.h>
using namespace std;


int main()
{
    long  long i,j,k,l,m,n,t;
    long long ans=0,count=0;
    vector<long long> a;
    scanf("%lli",&k);
    while (k--)
    {
        ans=0;
        count=0;
        scanf("%lli",&t);
        for(i=0; i<t; i++)
        {
            scanf("%lli",&l);
            a.push_back(l);
        }
        sort(a.begin(),a.end());
        for(i=0; i<t; i++)
        {
            if(++count==a[i])
            {
                ans++;
                count=0;
            }
        }
        printf("%lli\n",ans);
        a.clear();
    }
    return 0;
}
