#include<iostream>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
int main()
{
	list <int> my_list;
	list <int>::iterator it;
	my_list.push_back(12);
	my_list.push_back(2);
	my_list.push_back(45);
	my_list.push_front(4);
	my_list.push_front(3);
	
	for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	my_list.reverse();
	
	cout<<"\n"<<endl;
		for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	
	my_list.clear();
	
	cout<<"\n"<<endl;
		for(it=my_list.begin();it!=my_list.end();it++)
	cout<< *it <<"\t";
	
	my_list.push_back(5);
	my_list.push_back(10);
	my_list.push_back(15);
	
	return 0;	
}

