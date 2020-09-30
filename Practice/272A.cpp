#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int i,j,k=0,l,n,m,cnt=0;
    scanf("%d",&m);
    for(j=0; j<m; j++)
    {
        scanf("%d",&n);
        k+=n;
    }
    for(i=1; i<=5; i++)
    {
        arr[i]=k+i;
    }
    m=m+1;
    for(i=1;; i+=m)
    {
        if(i>k+5)
            break;
        if(i>k)
        {
            for(j=1; j<=5; j++)
            {
                if(arr[j]==i)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<5-cnt<<endl;
    return 0;
}
