#include<bits/stdc++.h>
using namespace std;
void print_permutation(string str,int str_beg, int str_end )
{
    if(str_beg==str_end)
        cout<<str<<endl;
    else
    {
    	set<char> st;
        for(int i=str_beg; i<=str_end; i++)
        {
        	if (st.count(str[i]) != 0) {
        		continue;
        	}
            swap(str[str_beg],str[i]);
            st.insert(str[i]);

            print_permutation(str,str_beg+1,str_end);

            swap(str[str_beg],str[i]);
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    sort(str.begin(), str.end());
    print_permutation(str,0,n-1);
    return 0;
}
