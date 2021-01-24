#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<int ,int> ma;
  long long first=0;
  long long second=0;
  long long a,b,c,d,e,f,i,j,k;
  cin>>a;
  for(i=0;i<a;i++)
  {
    cin>>b;
    ma[b]=i;
  }
  cin>>c;
  for(j=0;j<c;j++)
  {
    cin>>d;
    first+=ma[d]+1;
    second+=a-ma[d];
  }
  cout<<first<<" "<<second<<endl;
  return 0;
}
