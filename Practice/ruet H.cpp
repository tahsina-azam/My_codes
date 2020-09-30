#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
int mod;
int i,j;
for(i=0;;i++)
{
	mod=a%b;
	if(mod==0)
	return b;
	a=b;
	b=mod;
}
return 1;
}
int main()
{
	long long int i,j,k,l,m,n,T,p,q,x1,x2,y1,y2,s,t;
 long long int cx1,cx2,r1,r2,cy1,cy2;
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>cx1>>cy1>>r1>>cx2>>cy2>>r2;
		s=(cx2-cx1)*(cx2-cx1)+(cy2-cy1)*(cy2-cy1);
		t=(r1+r2)*(r1+r2);
		if(s<=t)
		cout<<"NOT POSSIBLE"<<endl;
	else
	{
			k=(r1*cx2)+(r2*cx1);
		l=r1+r2;
		m=(r1*cy2)+(r2*cy1);	
		if(k%l!=0)
p=gcd(k,l);
else
p=l;
x1=k/p;
x2=l/p;
if(m%l!=0)
q=gcd(m,l);
else
q=l;
y1=m/q;
y2=l/q;
if(x1==0 && y1==0)
cout<<"0 0"<<endl;
else if(x1==0)
cout<<"0 "<<y1<<"/"<<y2<<endl;
else if(y1==0)
cout<<x1<<"/"<<x2<<" 0"<<endl;
else
cout<<x1<<"/"<<x2<<" "<<y1<<"/"<<y2<<endl;	
	}
	
	}
	return 0;
}
