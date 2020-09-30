#include<bits/stdc++.h>
#define sz 25
using namespace std;
int row, column,mat;
#define BOUNDARY(i, j) ( (i>=0 && i<row) && (j>=0 && j<column))
char grid[sz][sz];
bool visited[sz][sz];
int x,y;
int X[]={0,1,0,-1};
int Y[]={-1,0,1,0};

void dfs(int x,int y)
{
  for(int p=0;p<4;p++)
  if(BOUNDARY(x+X[p],y+Y[p]) && grid[x+X[p]][y+Y[p]]=='.' && !visited[x+X[p]][y+Y[p]] )
  {
    visited[x+X[p]][y+Y[p]]==true;
    mat++;
    dfs(x+X[p],y+Y[p]);
  }
}

int main()
{
 int tc,t,m,i,j,k,l,a,b;
 cin>>tc;
 for(i=0;i<tc;i++)
 {
   memset(visited, 0 , sizeof visited);
   cin>>a>>b;
   row=b;
   column=a;
   getchar();
   for(j=0;j<b;j++)
   {
     for(k=0;k<a;k++)
     {
       grid[j][k]=getchar();
       if(grid[j][k]=='@')
       {
         x=j;
         y=k;
         visited[x][y]=true;
       }
     }
     getchar();
   }
   mat=1;
   dfs(x,y);
   printf("Case %d: %d\n",i+1,mat);
 }
 return 0;
}
