#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

int i,l,j,k,m,n;
   scanf("%d",&k);
   for(i=0;;i++)
   {
     k++;
     j=k/1000;
     l=(k-j*1000)/100;
     ////cout<<l<<endl;
     m=(k-(j*1000)-(l*100))/10;
 //    cout<<m<<endl;
     n=(k-(j*1000)-(l*100)-(m*10));
    // cout<<n<<endl;
     if(j!=l && l!=m && m!=n && j!=n && l!=n && m!=j)
     {
       printf("%d\n",k);
       break;
     }

   }
  return 0;
}
