#include<bits/stdc++.h>
using namespace std;

int main()
{
int  p=0;
    char infix[10000];
    char t;
    while (scanf("%c",&t)!='\n')
    {
      infix[p++]=t;
     // cout<<t;
    }
    for(int i=0;i<p;i++)
    cout<<infix[i];
//    removeSpaces(infix);
    //infixToPostfix(infix);
    return 0;
}
