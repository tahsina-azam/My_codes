#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,m=0,n,cnt1=0,cnt2=0,cnt3=0;
 char a[200];
 char b[200];
 char c[200];
for(i=0;;i++)
{
  scanf("%c",&a[i]);
  if(a[i]=='\n')
    break;
    cnt1++;
}
for(j=0;;j++)
{
  scanf("%c",&b[j]);
  if(b[j]=='\n')
    break;
    cnt2++;
}
for(k=0;;k++){
    scanf("%c",&c[k]);
  if(c[k]=='\n')
    break;
    cnt3++;
}
if(cnt1+cnt2>cnt3)
{
  printf("NO\n");
}
else if(cnt1+cnt2<cnt3)
  printf("NO\n");
else
{
  for(i=0;i<cnt1;i++)
  {
    for(j=0;j<cnt3;j++)
    {
      if(c[j]==a[i])
      {
        c[j]='0';
        break;
      }
    }
  }
 for(i=0;i<cnt2;i++)
  {
    for(j=0;j<cnt3;j++)
    {
      if(c[j]==b[i])
      {
        c[j]='0';
        break;
      }
    }
  }
m=0;
  for(i=0;i<cnt3;i++)
  {
    if(c[i]!='0')
  {
    cout<<c[i]<<endl;
      printf("NO\n");
    m=5;
    break;
  }

  }
if(m==0)
  printf("YES\n");
}

  return 0;

}
