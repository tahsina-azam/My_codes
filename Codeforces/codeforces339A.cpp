#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[1005];
  vector<int> v;
  int p,k,l,o,a1=0,a2=0,a3=0,i;

  scanf("%[^\n]",a);
  for(i=0;i<105;i++)
  {
    if(a[i]=='1')
      a1++;
    else if(a[i]=='2')
      a2++;
    else if(a[i]=='3')
      a3++;
   else if(a[i]!='+')
    break;


  }
  if(a1!=0)
   {
      cout<<"1";
      for(i=1;i<a1;i++)
      {
        cout<<"+1";
      }
      if(a2!=0 || a3!=0)
        cout<<"+";
   }

    if(a2!=0)
   {
     cout<<2;
      for(i=1;i<a2;i++)
      {
        cout<<"+2";
      }
      if(a3!=0)
        cout<<"+";
   }
    if(a3!=0)
   {
     cout<<3;
      for(i=1;i<a3;i++)
      {
        cout<<"+3";
      }
   }

cout<<"\n";
  return 0;
}
