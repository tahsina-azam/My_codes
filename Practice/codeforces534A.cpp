#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,m,n,f,c,e,cnt=0,r;
  char p,q;
  char a[56][56];
  cin>>m>>n;
  for(i=1;i<=m;i++)
  {

    for(j=1;j<=n;j++)
    {
      cin>>p;
      a[i][j]=p;
    }
  }
  for(i=1;i<=m;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(a[i][j]!='x')
      {
         f=0;e=0;c=0;r=0;
        if(a[i][j]=='c' )
        c++;
        else if(a[i][j]=='f' )
          f++;
       else if(a[i][j]=='a')
          r++;
        else if(a[i][j]=='e' )
          e++;
          if(a[i][j]!='x')

        if(a[i][j+1]=='c'  && j<n)
        c++;
        else if(a[i][j+1]=='f' && j<n)
          f++;
       else if(a[i][j+1]=='a'&& j<n)
          r++;
        else if(a[i][j+1]=='e'&& j<n )
          e++;
           if(a[i+1][j+1]=='c'  && j<n && i<m)
        c++;
        else if(a[i+1][j+1]=='f' && j<=n&& i<=m)
          f++;
       else if(a[i+1][j+1]=='a'&& j<n&& i<m)
          r++;
        else if(a[i+1][j+1]=='e'&& j<n&& i<m)
          e++;

        if(a[i+1][j]=='c'  && i<m)
        c++;
        else if(a[i+1][j]=='f' && i<m)
          f++;
       else if(a[i+1][j]=='a' && i<m)
          r++;
        else if(a[i+1][j]=='e' && i<m )
          e++;

            if(f==1 && e==1 && c==1 && r==1)
    cnt++;
      }
    }

  }

cout<<cnt<<endl;
   return 0;

}
