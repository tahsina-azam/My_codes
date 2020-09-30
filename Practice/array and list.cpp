#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	
	list <int> my_list(arr,arr+5);
	list <int>::iterator it;
	
	for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	
	cout<<"\n"<<endl;
	
	it=my_list.begin();
	it++;
	
	my_list.insert(it, 7);
		for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	
	cout<<"\n"<<endl;
	it=my_list.begin();
	for(int i=0;i<4;i++)
	it++;
	
	my_list.insert(it, 7);
	for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	
	
	return 0;
}
