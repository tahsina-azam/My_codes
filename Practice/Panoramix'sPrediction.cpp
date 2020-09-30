#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,n,m,p=0;
  int arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  scanf("%d%d",&m,&n);
  for(i=0;i<15;i++)
  {
    if(arr[i]==m)
    {
      p=i;
      break;
    }
  }
  if(arr[p+1]==n)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
