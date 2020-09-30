#include<bits/stdc++.h>
using namespace std;
int main()
{
char arr1[105];
char arr2[105];
char arr3[105];
int i,j,k,l,o,p,cnt=0;
char m,n;
for(i=0;i<102;i++)
{
  scanf("%c",&m);
  if(m=='\n')
    break;
  arr1[i]=m;
  cnt++;
}
for(j=0;j<cnt;j++)
{
  scanf("%c",&m);
  if(m=='\n')
    break;
  arr2[j]=m;
}
for(j=0;j<cnt;j++)
{
  if(arr1[j]!=arr2[j])
    printf("1");
    else
      printf("0");
}
printf("\n");
return 0;
}
