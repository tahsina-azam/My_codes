#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


using namespace std;
/*
 * Complete the 'filledOrders' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY order
 *  2. INTEGER k
 */

int filledOrders(vector<int> order, int k,int n) {
    int i=0;
 for(i=0;i<n;i++)
   {
       if(order[i]>k)
       {
           return i;
       }
   }
   return i;
}

int main()
{
    vector<int> order;
    vector<int> count;
    int n,k;
    int p;

    cin>>n;
    cin>>p;
    order.push_back(p);
    count.push_back(p);
    for(int i=1;i<n;i++)
    {
        cin>>p;
        order.push_back(p);
        count.push_back(count[i-1]+order[i]);

    }
    cin>>k;
   p=filledOrders(count,k,n);
   cout<<p<<endl;
   return 0;
}