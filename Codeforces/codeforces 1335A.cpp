#include<bits/stdc++.h>
using namespace std;

map<long long, long long > mu;

long long return_multiplication(long long  x)
{
    if(mu.find(x)==mu.end())
    {
        long long max_num=9e19,min_num=0;
        while(x>0)
        {
            long long y=x%10;
            x=x/10;
            max_num=min(max_num,y);
            min_num=max(min_num,y);
        }
        mu[x]=max_num*min_num;
        return (max_num*min_num);
    }
    else
        return mu[x];

}
int main()
{
    long long i,j,k,l,m,n,t,a,x,p;
    cin>>t;
    while(t--)
    {
        scanf("%I64d%I64d",&a,&k);
        x=a;
        k=k-1;
        while (k--)
        {
            p=return_multiplication(x);
            x+=p;
        }
       printf("%I64d\n",x);
    }
    return 0;
}
