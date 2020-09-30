#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,m,n,q,p,sum,num;
  vector<int> v;
  vector<int> f;
  cin>>m>>n;
  for(i=0;i<m;i++)
  {
    cin>>p;
    v.push_back(p);
  }
  for(i=0;i<n;i++)

  {
    sum=0;
    cin>>k>>q;
    for(j=k-1;j<=q-1;j++)
    {
      f.push_back(v[j]);
    }
    sort(f.begin(),f.end());
    for(j=1;j<q-k+1;j++)
    {
      if(f[j-1]<f[j])
        sum++;
    }
    cout<<sum+1<<endl;
    f.clear();
  }
  return 0;
}
