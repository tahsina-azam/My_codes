#include<bits/stdc++.h>
#define sz 10000
using namespace std;
int arr[sz];
int part(int arr[],int beg,int last)
{
  int low=beg , hi=last;
  bool right=true;
  while(low<hi)
  {
    if(arr[low]>arr[hi])
    {
      swap(arr[low], arr[hi]);
      right^=1;
    }
    if(right)hi--;
    else low++;
  }
  return low;
}
void quick_sort(int arr[],int beg, int last)
{
  if(beg>=last)return;
  int i=part(arr,beg,last);
  quick_sort(arr,beg,i-1);
  quick_sort(arr,i+1,last);
}
int main()
{
  int i,j,k,n,l;
  cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(i=0;i<n;i++)
      cout<<arr[i]<<"\n";
  return 0;
}
