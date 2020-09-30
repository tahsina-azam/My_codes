#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int i=0,j,k,l,m;
  while (scanf("%lli",&k)!=EOF)
  {
    if(i==0 && k!=42)
    {
      printf("%lli\n",k);
    }
    if(k==42)
      i=1;
  }
return 0;
}
