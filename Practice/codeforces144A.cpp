#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k,l,m,n,cnt1=0,cnt2=0,cnt=0,t1,t2;
  vector<int> arr;
  vector<int>app;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&m);
    app.push_back(m);
    arr.push_back(m);
  }
  sort(app.begin(),app.end());
  //cout<<app[0]<<"  "<<app[n-1]<<endl;
  for(i=0;i<n;i++)
  {
    if(arr[i]==app[n-1] && cnt==0)
    {
      cnt1=i;
      cnt=1;
      //cout<<cnt1<<endl;
    }
    if(arr[i]==app[0])
    {
      cnt2=i;
     // cout<<cnt2<<endl;
    }
  }
  if(cnt1<cnt2)
  {
     t1=cnt1;
     t2=n-1-cnt2;
    // cout<<t1<<" "<<t2<<endl;
  }
  else{
     t1=cnt1;
    t2=n-1-cnt2-1;
  }
  printf("%d\n",t1+t2);
  return 0;
}
