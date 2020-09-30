#include<iostream>
#include<iterator>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
		vector<int>::iterator it;  
	int i,j,k,l,m,q,n; 
	cin>> q;
	for(i=0;i<q;i++)
	{
		cin>>n;
		cin>>k;
		for(i=0;i<n;i++)
		cin>> vec[i] ;
		 sort(vec.begin(),vec.end());
		 
		
		 cout<<vec[0]<<"\t";
	}
	



	
	return 0;
	
}
