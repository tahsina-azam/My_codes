#include <iostream>
#include <vector>
#include <stdio.h>
#define sz 10000000
using namespace std;
bool s[sz+2];
int main()
{
  vector<int> prime;
   int i,j,k,l,m,n,o,count;
  s[0]=true;
  s[1]=true;
  for(i=2;i<=sz;i++)
  {
    if(s[i]==false)
      prime.push_back(i);
    for(j=2*i;j<=sz;j=j+i)
    {
      s[j]=true;
    }
  }
  scanf("%d", &l);
  for(int cs=0;cs<l;cs++)
  {
     scanf("%d", &n);
      count=0;
      for(i=0;true;i++)
  {
  int x=prime[i];
  int y=n-x;
  if(x>y)
    break;
    if(s[y]==false)
    count++;
  }
  printf("Case %d: %d\n", cs+1, count);
  }
  return 0;
}
