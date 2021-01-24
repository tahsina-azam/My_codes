#include<bits/stdc++.h>
using namespace std;
unsigned long long arr[600];

void fill_array(unsigned long long N)
{
	unsigned long long G=0;

    if(arr[N]==0)
    {
	 	for(int i=1;i<N;i++)
        {
        	for(int j=i+1;j<=N;j++)
            {
             G+=(__gcd(i,j));
            }
        }
        arr[N]=G;
       G=0;
	}
}

void find_ans(unsigned long long n)
{
	fill_array(n);
  cout<<arr[n]<<endl;
}

int main()
{
	unsigned long long k,N;

	memset(arr,0,600);
	for(k=0;;k++)
	{
		cin>>N;
	    if(N==0)
	    {
		return 0;
	    }
        find_ans(N);
	}
   return 0;
}