#include<bits/stdc++.h>
using namespace std;

void reverse_string(string s,int start, int end_)
{
if(start==end_ || start-end_==1)
  {
    cout<<s<<endl;
    return ;
  }
char p=s[start];
s[start]=s[end_];
s[end_]=p;
reverse_string(s,start+1,end_-1);
}
int main()
{
 string str;
 getline(cin,str);
 cout<<str<<endl;
 int n=str.size()-1;
reverse_string(str,0,n);
 return 0;
}
