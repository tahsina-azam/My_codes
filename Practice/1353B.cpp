#include<bits/stdc++.h>
using namespace std;

int main()
{

  long long i,j,k,l,m,n,o,a,b,c,t,sum=0;
  vector <long long>  one;
  vector<long long > two;
  scanf("%lli",&t);
  for(i=0;i<t;i++)
  {
    sum=0;
    scanf("%lli%lli",&m,&n);
    for(j=0;j<m;j++)
    {
      scanf("%lli",&l);
      one.push_back(l);
    }
    for(j=0;j<m;j++)
    {
      scanf("%lli",&l);
      two.push_back(l);
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end(),greater<int>());
    for(j=0;j<n;j++)
    {
      if(one[j]<two[j])
      {
        k=one[j];
        one[j]=two[j];
        two[j]=k;
      }
      else
        break;
    }
    for(j=0;j<m;j++)
    {
      sum+=one[j];
    }
    printf("%lli\n",sum);
    one.clear();
    two.clear();
  }
  return 0;
}
