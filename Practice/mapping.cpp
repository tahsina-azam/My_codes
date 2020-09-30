#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	int i,j,k,l;
	map<string,int> m;
	map<string,int>::iterator it;
	m["dipta"]=34;
	m["sheeva"]=72;
	m["raisa"]=50;
	m.insert(make_pair("fahad",75));
	
	it=m.begin();
	cout<<it->first<<"\n"<<endl;
	cout<<it->second<<"\n"<<endl;
	
	for( it=m.begin();it!=m.end();it++)
	cout<<it->first<<  it->second <<endl;
	
	return 0;
	
}
