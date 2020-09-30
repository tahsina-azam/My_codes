#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
  long double a,b,c,r1,r2,r3,area,s,c1,c2,c3,A,B,C,darea;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>r1>>r2>>r3;
		a=r1+r2;
		b=r2+r3;
		c=r3+r1;
		A=(b*b+c*c-a*a)/(2*b*c);
		A=acos(A);
		B=(a*a+c*c-b*b)/(2*a*c);
		B=acos(B);
		C=(a*a+b*b-c*c)/(2*a*b);
		C=acos(C);
		c1=(0.5)*r3*r3*A;
		c2=(0.5)*r1*r1*B;
		c3=(0.5)*r2*r2*C;
		s=(a+b+c)/2;
		area=s*(s-a)*(s-b)*(s-c);
		area=pow(area,0.5);
		darea=area-c1-c2-c3;
		cout<<"Case "<<i+1<<": "<<setprecision(10)<<darea<<endl;	
	}
return 0;	
}
