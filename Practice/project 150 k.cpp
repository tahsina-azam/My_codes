#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,count,cnt,p;
	queue<char> s;
	string str2;
	string str;
	cin>>n;
	for(i=0;i<n;i++)
	{
		count=0;
		cin>> str;
		cin>>str2;
sort(str.begin(),str.end());
sort(str2.begin(),str2.end());	
 m=0;
  cnt=0;
  for(j=0;j<str.size();j++)
  {
    for(p=m;p<str2.size();p++)
      if(str[j]==str2[p])
    {
      if(cnt==0)
      {
        cout<<"Case "<<i+1<<": ";
        cnt++;
      }
    cout<<str[j];
      count++;
      m=p+1;
      break;
    }
  }
  if(count!=0)
   cout<<""<<endl;
  if(count==0)
cout<<"Case "<<i+1<<": "<<": ("<<endl;
  }
	
return 0;
}
