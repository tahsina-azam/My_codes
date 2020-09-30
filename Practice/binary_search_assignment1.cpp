#include<bits/stdc++.h>
using namespace std;
int arrSize;
int lower_bound(int arr[],int n, int low,int hi){
    if(arr[0]==n){
            return 0;
        }

    if (low <= hi) {
            int mid=low+((hi-low)/2);
 
            if(arr[mid]<n && arr[mid+1]==n) {
                return mid+1;
            } else if (n > arr[mid]){
                lower_bound(arr,n,mid+1, hi);
            }
            else{
                lower_bound(arr,n,low,mid-1);
            }
        } else {
            return -1;
        }
}
 
int higher_bound(int arr[],int n, int low,int hi) {
        if(arr[arrSize-1]==n){
            return arrSize;
        }
        
        if (low <= hi) {
            
            int mid=low+((hi-low)/2);
 
            if(arr[mid]==n && arr[mid+1]>n) {
                return mid+1;
            } else if (n >=arr[mid]){
                higher_bound(arr,n,mid+1, hi);
            }
            else{
                higher_bound(arr,n,low,mid-1);
            }
        } else {
            //cout<<low<<" "<<hi<<endl;
            return -1;
        }
}
 
int main() {
        int arr[]={3, 3, 5 ,5 ,5,7,9};
        int n;

        arrSize = sizeof(arr)/sizeof(arr[0]);
        cin>>n;
        int hi=higher_bound(arr,n,0,arrSize-1);
        int lo=lower_bound(arr,n,0,arrSize-1);
        cout<<hi-lo<<endl;
        
        return 0;
 
}