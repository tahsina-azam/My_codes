#include<bits/stdc++.h>
using namespace std;
char arr[5010];
short int DP[5010][5010];

int solve(int i,int j)
{
    if(i==j || j<i)
        return 0;
    if(DP[i][j]!=-1) return DP[i][j];
    if(arr[i]==arr[j])
        return DP[i][j]=solve(i+1,j-1);
    return DP[i][j]=1+min(solve(i,j-1),solve(i+1,j));
}

int main()
{
    memset(DP,-1,sizeof DP);
    int n;
    scanf("%d %s",&n,arr);
    int result=solve(0,n-1);
    printf("%d\n",result);
}
