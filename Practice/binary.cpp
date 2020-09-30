#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  vector<int>p;
  int i,j,k,l=0,m=0,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
cin>>k;
    if(k==1)
    {
    p.push_back(i);
    m++;
    }
   else
   {
     l++;
   }
  }
  k=p[0];
  for(i=0;i<k;i++)
    cout<<"0";

   if(m%2==0 || m==1)
    cout<<"1";
  else
    cout<<"11";
    j=l-k;
    for(i=0;i<j;i++)
      cout<<"0";
    cout<<""<<endl;

    return 0;
}
