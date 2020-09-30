#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,n,m;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>m;
    if(m==1)
      printf("4\n");
    else if(m==2)
      printf("B\n");
    else if(m==3)
      printf("A\n");
    else if(m==4)
      printf("76\n");
    else if(m==5)
      printf("A\n");
    else if(m==6)
      printf("-2\n");
    else
      printf("D\n");
  }
  return 0;
}
