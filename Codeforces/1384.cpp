#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,t,pre,max=0;
	std::vector<int> a;
	std::vector<char> v;
	char alph[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
 cin>>t;
 
 for(i=0;i<t;i++)
 {
 	cin>>n;
 	for(j=0;j<n;j++)
 	{
 		cin>>pre;
 		a.push_back(pre);
 		if(pre>max)
 		{
 			max=pre;
 		}
 	}
   k=0;
   for(j=0;j<max+2;j++)
   {
   	v.push_back(alph[k]);
   	k++;
   	if(k==26)
   	{
   		k=0;
   	}
   }
   for(j=0;j<n;j++)
   {
   	for(int k=0;k<a[j];k++)
   	{
      cout<<v[0];
   	}
   }

 }

}