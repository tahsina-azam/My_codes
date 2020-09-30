#include <iostream>

using namespace std;

int main()
{
   string charactername ="Tom";
int characterage =50;
cout<<"My name is "<<charactername<<endl;//this way we can insert a value through variable;
cout<< "my age is "<< characterage<<endl;
//if we want to modify:
charactername="mike";
cout<<"My name is "<<charactername<<endl;
cout<<"and age " <<characterage<< " is not of my liking"<<endl;
return 0;
}
