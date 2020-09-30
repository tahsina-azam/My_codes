#include<bits/stdc++.h>
using namespace std;
 int arr[5][5];
int solve[5][5];
int main()
{
// memset(solve, 1,sizeof solve);

  int i,j,k,l,m,n,p;
   for(i=0;i<6;i++)
  {

    for(j=0;j<6;j++)
  {
solve[i][j]=1;
  }
  }
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
  {
    scanf("%d",&arr[i][j]);
    for(k=0;k<arr[i][j];k++)
    {
      if(solve[i][j]==0)
      {
        solve[i][j]=1;
      }
      else
        solve[i][j]=0;
        if(solve[i+1][j]==0)
      {
        solve[i+1][j]=1;
      }
      else
        solve[i+1][j]=0;
        if(solve[i][j+1]==0)
      {
        solve[i][j+1]=1;
      }
      else
        solve[i][j+1]=0;
      if(i-1>=0 && solve[i-1][j]==0)
      {
        solve[i-1][j]=1;
      }
      else
        {
          if(i-1>=0)
          solve[i-1][j]=0;
        }
        if(j-1>=0 && solve[i][j-1]==0 )
      {
        solve[i][j-1]=1;
      }
      else
        {
          if(j-1>=0)
          solve[i][j-1]=0;
        }
    }
  }
  for(i=0;i<3;i++)
  {

    for(j=0;j<3;j++)
  {
    cout<<solve[i][j];
  }
  printf("\n");
  }
  return 0;
}
