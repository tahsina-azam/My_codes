#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<string> forward;
	stack<string> backward;
	string y;
	y.reserve(50);
	string cur;
	cur.reserve(50);
	string s;
	s.reserve(50);
	string p;
	p.reserve(50);
	string r;
	r.reserve(50);
	string t;
	t.reserve(50);
    string u;
    u.reserve(50);
	 p="FORWARD";
	 r="BACK";
	 t="VISIT";
     u="QUIT";
     cur="http://www.lightoj.com/";
     int i,j,k,l,m,n;
     cin>>n;
   for(j=0;j<n;j++)
   {
   		cout<<"Case "<<j+1<<":"<<endl;
   	  for(i=0;i<100;i++)
     {
     	cin>>s;
     	if(s==p)
     	{
     		if(forward.empty())
     		{
     			cout<<"Ignored"<<endl;
			 }
			 else
			 {
			 backward.push(cur);
			 cout<<forward.top()<<endl;
			 cur=forward.top();
			 forward.pop();	
			 }
			 
		 }
		 else if(s==r)
		 {
		 	if(backward.empty())
		 	{
		 		cout<<"Ignored"<<endl;
			 }
			 else
			 {
			 	forward.push(cur);
			 	cout<<backward.top()<<endl;
			 	cur=backward.top();
			 	backward.pop();
			 }
		 }
		 else if(s==t)
		 {
		 backward.push(cur);
		 cin>>y;
		 cout<<y<<endl;
		 cur.clear();
		 cur=y;
		 while(!forward.empty())
		 forward.pop();	
		 }
		 else
		 {
		 	break;
		 }
	 }
	 cur="http://www.lightoj.com/";
	 while(!forward.empty())
	 {
	 	forward.pop();
	 }
	 while(!backward.empty())
	 {
	 	backward.pop();
	 }
   }
    	return 0;
}
