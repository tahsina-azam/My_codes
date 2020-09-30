#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<float ,pair<float,float> > &a,
               const pair< float, pair<float,float> > &b)
{
       return (a.first > b.first);
}
int main()
{

  vector<pair<float, pair <float , float> > >v;
  int i,j,k,l,n;
float p,q,r,pro=0,profit,weight,capacity;
cin>>capacity;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%f%f",&profit,&weight);
   v.push_back({profit/weight, {profit,weight}}) ;
  }
  sort(v.begin(),v.end(),sortinrev);
  for(j=0;j<n;j++)
  {
    p=v[j].first;

    q=v[j].second.first;
   // cout<<q<<endl;
    r=v[j].second.second;
    //cout<<r<<endl;
    if(r<=capacity)
    {
      capacity-=r;
      pro+=q;
      cout<<r<<endl;
    }
   //else if(capacity==0)
      //break;
    else
    {
      pro+=(capacity*q/r);
      cout<<capacity<<endl;
      capacity=0;
    }
    }

  printf("%f\n",pro);

  return 0;
}
