#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  cout<< pow(5,2) <<endl ;
  cout<< sqrt(36)<<endl ;
  cout<< ceil(4.8)<< endl;//nearest possible lowest integer;
  cout<< floor(4.2)<< endl;//nearest possible highest integer;
  cout<< fmin(4,2)<<endl ;//cant use more than 2 numbers to sort;outputs the minimum of the two;
  cout<< fmax(4,9)<<endl ;//the same goes here too;outputs the maximum of the two;
return 0;
}
