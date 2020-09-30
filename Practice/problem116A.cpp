#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int> a,b,c;
int i,j,k,l,m,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d%d",&k,&l);
  a.push_back(k);
  b.push_back(l);
}
c.push_back(b[0]);
for(j=1;j<n;j++)
{
  c.push_back(c[j-1]-a[j]+b[j]);
}
sort(c.begin(),c.end());
printf("%d\n",c[n-1]);
return 0;
}
