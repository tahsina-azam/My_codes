#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
		int arr[5]={1,2,3,4,5};
	
	list <int> my_list(arr,arr+5);
	list <int>::iterator it;
	
	it=find(my_list.begin() ,my_list.end() , 4);
	
	my_list.insert(it,7);
	my_list.erase(it);//would erase the element which the it pointer is pointing,here it is pointing 4;
	
	cout<<"\n"<<endl;
	
	for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	
	cout<<*it<<endl;
	return 0;
}
