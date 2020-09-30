#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
bool myfunc(int a,int b)
{
	return(a>b);
}
using namespace std;
int main()
{
	vector <int> vec;
	vec.push_back(34);
	vec.push_back(10);
	vec.push_back(45);
	vec.push_back(432);
	vec.push_back(5);
	
	sort(vec.begin(),vec.end());
	
	
	for(int i=0;i<vec.size();i++)
	cout << vec[i] <<endl;
		cout<<"\n";

	
		sort(vec.begin(),vec.end(),myfunc);
			for(int i=0;i<vec.size();i++)
	cout << vec[i] <<endl;
	cout<<"\n";
	
		sort(vec.begin(),vec.begin()+3);
			for(int i=0;i<vec.size();i++)
	cout << vec[i] <<endl;
		cout<<"\n";
	
		
		for(int i=0;i<vec.size();i++)
	cout << vec[i] <<endl;
		cout<<"\n";
		

	return 0;
}
