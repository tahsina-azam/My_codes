#include<bits/stdc++.h>
using namespace std;
 
int binary_search(int arr[],int n, int low,int hi) {
 
        if (low <= hi) {
            int mid=(hi+low)/2;
 
            if(arr[mid]==n) {
                return mid;
            } else if (n > arr[mid]){
                binary_search(arr,n,low, mid-1);
            }
            else{
                binary_search(arr,n,mid+1,hi);
            }
        } else {
            return -1;
        }
}
 
int main() {
        int arr[]={100,90,87,86,80,8};
        int n;
        int arrSize = sizeof(arr)/sizeof(arr[0]);
 
        cout<<"insert the number you wanna search:"<<endl;
        cin>>n;
        int ans=binary_search(arr,n,0,arrSize-1);
        cout<<ans<<endl;
        return 0;
 
}