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
int digits_infactorial(int r, int n)
{
  double sum=0;
  if(n<0)
    return 0;
  if(n<=1)
    return 1;
  else
   sum= ((n * log(n / M_E)/log(r)+
                 log(2 * M_PI * n) /
                 (log(r)*2.0)));



  return floor(sum)+1;
}
int main()
{
  int j,k,l,m,t,i;
  long long int a ,b;
  cin>>t;
  for(k=0;k<t;k++)
  {
    cin>>a>>b;
    long long int p=digits_infactorial(b,a);
    cout<<"Case "<<k+1<<": "<<p<<"\n";
  }
  return 0;
}
