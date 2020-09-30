#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<char> v;
  char a,b;
unsigned  long long  i,j,k,l,m,n,c=0,d=0;
  scanf("%llu%llu",&m,&n);
  for(i=0;i<m;i++)
  {
    scanf("%c",&a);
    if(a=='.')
      c=0;
      if(a=='#')
        c++;
    if(c==n)
    {
      d=5;
      cout<<"NO"<<endl;
      break;
    }
  }
  if(d==0)
    cout<<"YES"<<endl;
  return 0;
}
