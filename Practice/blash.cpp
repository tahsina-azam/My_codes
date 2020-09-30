#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k,l,n,m;
  cin>>i>>j>>k;
  if((i+k)<=j)
    cout<<(i+k)*2<<endl;
  else if((j+k)<=i)
    cout<<(j+k)*2<<endl;
  else if(i==j && j==k)
    {
      int q=(i+j+k)/2;
      cout<<q*2<<endl;
    }
  else if(i<j)
   {
     int q=j*2;
     if((k-(j-i))%2==0)
     cout<<q+(k-(j-i))<<endl;
     else
      cout<<q+(k-(j-i))-1<<endl;
   }
  else
    {
      int q=i*2;
      if((k-(i-j))%2==0)
        cout<<q+(k-(i-j))<<endl;
      else
        cout<<q+(k-(i-j)-1)<<endl;
    }
  return 0;
}
