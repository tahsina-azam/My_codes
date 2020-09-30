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
int digits_infactorial(int r ,int n )
{
  if(n<0)
    return 0;
  if(n==1)
    return 1;
  else
    for(int i=2;i<=n;i++)
    long long int sum+=logr(i);
  return floor(sum)+1;
}
int main()
{
  int j,k,l,m,t;
  long long int a ,b;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>a>>b;
    long long int p=digits_infactorial(b,a);
    cout<<"Case "<<i+1<<": "<<p<<"\n";
  }
  return 0;
}
