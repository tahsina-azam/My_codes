#include <bits/stdc++.h>  
using namespace std; 
  
long long int find(double p) 
{ 
    long long int ans;
    ans= ceil(sqrt(2*p*log(1/(1-0.50)))); 
   /* for(int j=temp;j>=0;j--){
    	double dum=1-exp((-j*(j-1))/(2*p));
    	cout<<dum<<endl;
    	if(abs(0.50-dum)<=0.05){
    		ans=j;
		}
		else{
			break;
		}
	}*/
	return ans;
} 
  
int main() 
{ 
   int t,i=1;
   double day;
   cin>>t;
   while(t--){
   	cin>>day;
   	cout <<"Case "<<i<<": "<< find(day)<<endl;
   	i++;
   } 
   return 0;
} 
