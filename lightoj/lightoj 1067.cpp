#include<bits/stdc++.h>
using namespace std;
vector<long long> find_factorial;

int gcdExtended(int a, int b, int* x, int* y); 

void factorial(){
	long long sum=1;
	for(long long i=1;i<=1000000;i++){
		sum*=i;
		sum%=1000003;
		find_factorial.push_back(sum);
	}
	
}

long long modInverse(int a, int m) 
{ 
    int x, y; 
    int g = gcdExtended(a, m, &x, &y); 
   
        
        long long res = (x % m + m) % m; 
        return res;
       
} 
  
int gcdExtended(int a, int b, int* x, int* y) 
{ 
    
    if (a == 0)  
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    int x1, y1; 
    int gcd = gcdExtended(b % a, a, &x1, &y1); 
  
    *x = y1 - (b / a) * x1; 
    *y = x1; 
  
    return gcd; 
} 

int main(){
	int t,cnt=0;
	int n,k;
	
	find_factorial.push_back(1);
	factorial();
	cin>>t;
	while(t--){
		cin>>n>>k;
		
		long long up=find_factorial[n];
		long long down=find_factorial[k]*find_factorial[n-k];
		down%=1000003;
		long long ans=up*modInverse(down,1000003);
		cout<<"Case "<<++cnt<<": "<<ans%1000003<<endl;
	}
	return 0;
}
