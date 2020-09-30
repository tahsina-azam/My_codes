#include<bits/stdc++.h>
using namespace std;
int a[100];
int cnt,even,odd;
void find_ans(int even, int odd){
     if(even==odd)
     {
     	cout<<even<<endl;
     }
     else
     {
     	cout<<"-1"<<endl;
     }

}
int main()
{
int t,n,i;

cin>>t;
     for(i=0;i<t;i++)
     {
     	cnt=0;
     	even=0;
     	odd=0;
     	cin>>n;
     	for(int j=0;j<n;j++)
     	{
     		cin>>a[j];
     		if(j%2!=a[j]%2)
     		{
     			if(a[j]%2==0)
     			{
     				even++;
     			}
     			else
     			{
     				odd++;
     			}
     		}

     	}
     	find_ans(even,odd);
     }
     return 0;
}