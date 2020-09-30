#include<bits/stdc++.h>
using namespace std;
int  multiplication(int a,int b,int c)
{
    int first=1,second=1;
    for(int i=0; i<c; i++)
    {
        first=first*b;
    }
    for(int j=0; j<first; j++)
    {
        second=second*a;
    }
    return second;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int multiplied=multiplication(a,b,c);
    printf("%d",multiplied);
    return 0;
}
