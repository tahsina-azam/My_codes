#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,m,n,o,p,fls=0;
  vector<pair<int ,int> > v;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&m);
   for(j=0;j<m;j++)
   {
     scanf("%d%d",&o,&p);
     v.push_back({o,p});
     if(v[j].first<v[j].second)
     {
       fls=1;
     }
     if(j>0 && v[j-1].first>v[j].first)
     {
       fls=1;
     }
     if(j>0 && v[j-1].second>v[j].second)
     {
       fls=1;
     }
   }
   if(fls==1)
    cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;
   v.clear();
   fls=0;
 }
 return 0;
}
