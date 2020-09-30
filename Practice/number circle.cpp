#include<iostream>
#include<algorithm>
using namespace std;
void swap(int a,int b)
{

  int c;
  c=a;
  a=b;
  b=c;
}
void show(int *a)
{
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  int i;
  for(i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  if(a[n-1]<(a[0]+a[n-2]))
  {
    cout<<"YES"<<endl;
    ///show(a);
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    return 0;
  }
  else
  {
    swap(a[n-1],a[n-2]);
    if(a[n-1]<(a[0]+a[n-2]))
    {
      cout<<"YES"<<endl;
      //show(a);
      for(i=0;i<n;i++)
        cout<<a[i]<<" ";
      return 0;
    }

  }

}
