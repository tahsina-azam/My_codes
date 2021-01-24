#include <bits/stdc++.h> 
using namespace std; 

double ifTriangle(int x1,int y1,int x2,int y2){
	double p=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return p;
}
  
void findCircle(int x1, int y1, int x2, int y2, int x3, int y3) 
{ 
    long double x12 = x1 - x2; 
    long double x13 = x1 - x3; 
  
    long double y12 = y1 - y2; 
    long double y13 = y1 - y3; 
  
    long double y31 = y3 - y1; 
    long double y21 = y2 - y1; 
  
    long double x31 = x3 - x1; 
    long double x21 = x2 - x1; 
  
   
    long double sx13 = pow(x1, 2) - pow(x3, 2); 
  
  
    long double sy13 = pow(y1, 2) - pow(y3, 2); 
  
    long double sx21 = pow(x2, 2) - pow(x1, 2); 
    long double sy21 = pow(y2, 2) - pow(y1, 2); 
    long double h,k;
  
    long double f = ((sx13) * (x12) 
             + (sy13) * (x12) 
             + (sx21) * (x13) 
             + (sy21) * (x13)) 
            / (2 * ((y31) * (x12) - (y21) * (x13))); 
    long double g = ((sx13) * (y12) 
             + (sy13) * (y12) 
             + (sx21) * (y13) 
             + (sy21) * (y13)) 
            / (2 * ((x31) * (y12) - (x21) * (y13))); 
  
    int c = -pow(x1, 2) - pow(y1, 2) - 2 * g * x1 - 2 * f * y1; 
  
   
    if(g==0){
    	 h=0;
	}
	else{
		 h = (-1)*g; 
    
	} 
	if(f==0){
		 k=0;
	
	}
	else {
	      k = (-1)*f; 	
	}
    int sqr_of_r = h * h + k * k - c; 
  
    // r is the radius 
    float r = sqrt(sqr_of_r); 
  
    if(h==0){
        cout << h <<" "; 
	}
	else{
		
		cout<<setprecision(10)<<h<<" ";
	}
	if(k==0){
		cout << k <<endl; 
	}
	else{
			cout << setprecision(10)<< k <<endl; 
	}
     
} 
  

int main() 
{ 
    long long x1,y1,x2,y2,x3,y3;
    while (scanf("%li",&x1)!=EOF){
           scanf("%li%li%li%li%li",&y1,&x2,&y2,&x3,&y3);
    	vector<double> v;
    	double r=ifTriangle(x1,y1,x2,y2);
    	double s=ifTriangle(x2,y2,x3,y3);
    	double t=ifTriangle(x1,y1,x3,y3);
    	v.push_back(r);
    	v.push_back(s);
    	v.push_back(t);
    	sort(v.begin(),v.end());
    if(v[0]+v[1]<=v[2]){
    	printf("Impossible\n");
	} 
	else{
		findCircle(x1, y1, x2, y2, x3, y3);
	}
	v.clear();
	}
    
    return 0; 
} 
