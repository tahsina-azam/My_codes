#include<iostream>
using namespace std;
int sum(int x,int y);
int main()
{
	int i,j,k;
	cout<<"enter first number: "<<endl;cin>>i;
	cout<<"enter second number: "<<endl;cin>>j;
	
cout<<"the sum is: "<<sum(i,j)<<endl;
return 0;
	
}
int sum(int i, int j)
{
	int k=i+j;
	return k;
}
