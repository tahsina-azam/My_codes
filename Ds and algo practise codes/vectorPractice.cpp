#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,vector<int> > v;
	map<int,vector<int> > :: iterator it;
	int arr[]={1,3,1,9,2};

	for(int i=0;i<5;i++)
	{
		v[arr[i]].push_back(i);
	}
	for (auto const &kv : v)
	{
        std::cout << kv.first << " =>";
        for (auto const &i : kv.second)
        std::cout << " " << i;
        std::cout << std::endl;
    }
	return 0;
}