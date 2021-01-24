#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<char> v;
  int i,j,k,l,n,o,p,cnt,sum,num,zero,one;
  char m;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  {
    cnt=0;
    sum=0;
    num=0;
    zero=0;
    one=0;
    for(j=0;j<=110;j++)
    {
      scanf("%c",&m);
      if(m=='1')
        {
          cnt=1;
          one++;
        }
      if(cnt==1 && m=='0')
        sum++;
        if(m=='\n')
      break;
      v.push_back(m);
      num++;
    }
    for(k=num-1;k>=0;k--)
    {
      if(v[k]=='0')
        zero++;
      if(v[k]=='1')
          break;
    }
    if(one>1)
    {
        printf("%d\n",sum-zero);
    //printf("%d\n",zero);
    }

    else
      printf("0\n");
    v.clear();
  }
  return 0;
}
