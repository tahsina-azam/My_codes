#include <bits/stdc++.h>
using namespace std;

int find_min_val(int a)
{
    vector<int>arr(100);
    int temp,i=0,j;

    temp=a%10;
    while(a>0)
    {
        arr[i]=a%10;
        a=a/10;
        temp=max(arr[i],temp);
        i++;
    }

    int sum=0;
    temp++;

    for(j=0;j<i;j++)
    {
        sum+=arr[j]*pow(temp,j);
    }

    return sum;
}

int main()
{
    int A,B,T,ans;
		 cin>>T;
    while(T--)
    {
        cin>>A>>B;
        ans=find_min_val(A)+find_min_val(B);
        cout<<ans<<endl;
		 }
     return 0;
}
