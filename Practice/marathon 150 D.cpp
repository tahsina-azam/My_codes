#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a1,a2,b1,b2,c1,c2,d1,d2;
long long area;  
int i,j,k,l,m,n;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	d1=a1+c1-b1;
	d2=a2+c2-b2;
	area=a1*(b2-c2)+b1*(c2-a2)+c1*(a2-b2);
	area=abs(area);
	cout<<"Case "<<i+1<<": "<<d1<<" "<<d2<<" "<<area<<endl;
}
return 0;
}
