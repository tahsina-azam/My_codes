#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<int ,pair<int,int> > &a,
               const pair< int, pair<int,int> > &b)
{
       return (a.first > b.first);
}
int main()
{
int  seq[100];
  vector<pair<int, pair <int ,int > > >v;
  int i,j,k,l,job,profit, time,n,p,q,r,pro=0;
  for(i=0;i<=100;i++)
  {
    seq[i]=0;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d%d",&profit,&time);
   v.push_back({profit, {i+1,time}}) ;
  }
  sort(v.begin(),v.end(),sortinrev);
  for(j=0;j<n;j++)
  {
    p=v[j].first;
    cout<<p<<endl;
    q=v[j].second.first;
    cout<<q<<endl;
    r=v[j].second.second;
    cout<<r<<endl;
    if(seq[r]==0)
    {
      seq[r]=q;
      pro+=p;
    }
    else
    {
      for(k=r-1;k>0;k--)
      {
         if(seq[k]==0)
    {
      seq[k]=q;
      pro+=p;
    }
      }
    }
  }
  printf("%d\n",pro);
  for(j=0;j<100;j++)
  {
    if(seq[j]!=0)
      printf("%d\n",seq[j]);
  }
  return 0;
}
