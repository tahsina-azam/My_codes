#include<bits/stdc++.h>
using namespace std;

int find_ans(int n)
{
	int sum=1;
	int i;

if(n==1)
	{
		return 0;
	}

     for( i=1;;i++)
     {

     	sum=sum*2;

     	if(sum>=n)
     		{
     			return i;
     		}
     }
   
}

int main()
{
	int N, paste,cnt=0;

     while(scanf("%d",&N)!=EOF)
     {
     	 if(N>0)
	     {

	 	  paste=find_ans(N);
	 	  printf("Case %d: %d\n",++cnt,paste); 

 	     }
 	     else
 	     {
 	     	return 0;
 	     }
     }
	
     
    return 0;
}