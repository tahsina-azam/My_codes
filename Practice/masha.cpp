#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,strs,elevator;
  int x,y,z,t1,t2,t3;
  scanf("%d%d%d%d%d%d",&x,&y,&z,&t1,&t2,&t3);
  if(x>y)
    i=x-y;
  else
    i=y-x;
  if(x>z)
    j=x-z;
  else
    j=z-x;
  strs=i*t1;
  elevator=(i+j)*t2+3*t3;

  if(elevator<=strs)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
