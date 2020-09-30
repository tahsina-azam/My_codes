#include<bits/stdc++.h>
using namespace std;
long long arr[100];
vector< long long int > v;
vector<pair<long long int , long long int > >p;
int main()
{
  long long int i,j,k,l,m,n,o,sum=0,x,y,t;
  scanf("%lld",&t);
  for(k=0;k<t;k++)
 {
   sum=0;
   p.clear();
   v.clear();
    scanf("%lld%lld%lld",&m,&n,&o);
  for(i=0;i<m;i++)
  {
    scanf("%lld%lld",&x,&y);
  v.push_back(y);
  }
  sort(v.begin(),v.end());
  for(i=0;i<m;i++)
  {
    sum=0;
    for(j=i+1;j<m;j++)
    {
      if(v[i]==v[j] || v[i]+n>=v[j])
        sum++;
    }
   p.push_back( make_pair(sum+1,v[i]) );
  }
 sort(p.begin(),p.end());

 i=m-1;
 if(p[i].first==m)
 {
   printf("Case %lld: %lld\n",k+1,p[i].first);
 }
 else
 {
   for(j=0;j<o;j++)
 {
   if(i<0)
    break;
   sum+=p[i].first;
   int g=0;
   while(p[i-1].second<=p[i].second +n)
{
      i--;
      g=1;
}
  if(g==0 )
      i--;
 }
 printf("Case %lld: %lld\n",k+1,sum);
 }
 }
 return 0;
}
