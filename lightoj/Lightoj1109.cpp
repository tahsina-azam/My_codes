#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <sstream>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#define sf scanf
#define pf printf
#define LL long long
#define L long
#define mem(c,v) memset(c,v,sizeof(c))
#define ui unsigned int
#define ull unsigned long long int
#define nl puts("")
#define sq(x) ((x)*(x))
#define MX 10000009
#define N 100
#define MOD 10000000007
#define pb push_back
#define pi acos(-1.0)
#define sz size()
#define gc getchar ()
#define ps push
#define clr clear
#define inf 2147483647
#define bn begin()
#define ed end()

using namespace std;
bool cmp(pair<int ,int> a,pair<int,int> b)
{

  if(a.first<b.first)
    return 1;
if(a.first>b.first)
    return 0;
  if(a.second>b.second)
    {
      return 1;
    }
    return 0;

}
int main()
{

  int i,j,k,l,m,n,t;
  vector <pair <int,int> > v(1001);
  for(i=1;i<=1000;i++)
  {
    v[i].first=0;
    v[i].second=i;
  }
  for(i=1;i<=1000;i++)
  {
    for(j=i;j<=1000;j=j+i)
      v[j].first++;
  }
  sort(v.begin(),v.end(),cmp);
  cin>>t;
  for(k=0;k<t;k++)
  {
    cin>>n;
     cout<<"Case "<<k+1<<": "<<v[n].second<<"\n";
  }
  return 0;
}

