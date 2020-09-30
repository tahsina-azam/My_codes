#include<bits/stdc++.h>
using namespace std;

double find_area(double a ,double b,double c)
{
double s=(a+b+c)/2;
	 return sqrt(s*(s-a)*(s-b)*(s-c));	
}


void find_ans(double a ,double b,double c,double r)
{
	
	double area=area(a,b,c);
	double aa,bb,cc,areasec;
	double low=0,high=a,mid;
	for(int i=0;i<100;i++)
	{
      mid=(low+high)/2;
      aa=mid;
      bb=(b*aa)/a;
      cc=(c*aa)/a;
      areasec=area(aa,bb,cc);
      area=area-areasec;
      if((areasec/area)>=r)
      {
      	high=mid;
      }
      else
      {
      	low=mid;
      }

	}
	cout<<low<<endl;
	
}


int main()
{
	int i,j,T;
	double ab,ac,bc,ratio;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>ab>>ac>>bc>>ratio;
	find_ans(ab,ac,bc,ratio);
	}
	return 0;

}