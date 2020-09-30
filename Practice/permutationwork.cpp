#include<bits/stdc++.h>
using namespace std;
set<string> answer;
void print_permutation(string str,int str_beg, int str_end )
{
  cout<<"str_beg="<<str_beg<<"str_end="<<str_end<<endl;
    if(str_beg==str_end)
        cout<<str<<endl;
    else
    {
        for(int i=str_beg; i<=str_end; i++)
        {
            swap(str[str_beg],str[i]);
          cout<<"1---"<<str<<endl;

            print_permutation(str,str_beg+1,str_end);

            swap(str[str_beg],str[i]);
            cout<<"1---"<<str<<endl;
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    print_permutation(str,0,n-1);
    return 0;
}
