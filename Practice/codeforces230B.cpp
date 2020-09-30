#include<bits/stdc++.h>
using namespace std;
int a[1000008];

void is_t_prime(unsigned long long n)
{

    long double root;
    int cnt=0;

     root=sqrt(n);
     
     if(ceil(root)==floor(root) && n!=1 && n%2!=0)
     {
     	int p=root;
     	if(a[p]==0)
     	{
     		cout<<"NO"<<endl;
     	}

     	else
     	{
     		cout<<"YES"<<endl;
     	}
     }
     else if(n==4)
     {
     	cout<<"YES"<<endl;
     }
     else
     {
     	cout<<"NO"<<endl;
     }
}
void initialize()
{
	a[0]=0;
	a[1]=0;
    for(int p=2;p<=1000000;p++)
     {
     	a[p]=1;
     }
}
void fill_array()
{
	for(int b=2;b<=500000;b++)
	{
		if(a[b]==1)
		{
			for(int c=b+b;c<=1000000;c+=b)
		    {
			a[c]=0;
		    }
		}
	}
}
int main()
{
unsigned long long n,i,j,x;
initialize();
fill_array();
 
scanf("%I64d",&n);

    for(i=0;i<n;i++)
    {
    	scanf("%I64d",&x);
    	is_t_prime(x);
    }
return 0;
}