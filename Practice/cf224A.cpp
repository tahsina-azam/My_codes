#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,sone,stwo,sthree;
	cin>>sone>>stwo>>sthree;
	a=sqrt((sone*sthree)/stwo);
	b=sqrt((sone*stwo)/sthree);
	c=sqrt((stwo*sthree)/sone);
int ans=4*(a+b+c);
cout<<ans<<endl;
	 return 0;

}