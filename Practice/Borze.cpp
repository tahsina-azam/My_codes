#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<char> v;
  vector<int> m;
  char a,b;
  int i,j,k;
  for(i=0;i<205;i++)
  {
    scanf("%c",&a);
    if(a=='\n')
      break;
    v.push_back(a);
  }
  for(j=0;j<i;j++)
  {
       if(v[j]=='-' && v[j+1]=='.')
      {
        printf("1");
        j=j+1;
      }
      else if(v[j]=='-' && v[j+1]=='-')
      {
        printf("2");
        j=j+1;
      }
      else  if(v[j]='.')
      {
      printf("0");
      }
      else
        break;
  }
printf("\n");
return 0;
}
