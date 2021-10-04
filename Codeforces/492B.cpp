#include<bits/stdc++.h>
using namespace std;

int main(){
       long long n,l,p;
       vector<long long> light;
       vector<long long> diff;

       cin>>n>>l;

       for(long long tt=0;tt<n;tt++){
          cin>>p;
          light.push_back(p);
       }

       sort(light.begin(),light.end());

       double ans = light[0]>(l-light[n-1])?light[0]:(l-light[n-1]);
       if(n==1){
        printf("%.10lf",ans);
        return 0;
       }

       for(int i=1;i<n;i++){
          diff.push_back(light[i]-light[i-1]);
       }

       sort(diff.begin(),diff.end());
       if(ans>(diff[n-2]/2.0)){
         printf("%.10lf",ans);
       }
       else{
        printf("%.10lf",(diff[n-2]/2.0));
       }
    return 0;
}
