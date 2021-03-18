#include<iostream>
using namespace std;
int main(){
 int A,B,C;
 int isFive=0,isSeven=0;
 cin>>A>>B>>C;
 if(A==5){
 	isFive++;
 }
 if(B==5){
 	isFive++;
 }
 if(C==5){
 	isFive++;
 }
 if(A==7){
 	isSeven++;
 }
 if(B==7){
 	isSeven++;
 }
 if(C==7){
 	isSeven++;
 }
 if(isFive==2 && isSeven==1){
 	cout<<"YES"<<endl;
 }
 else{
 	cout<<"NO"<<endl;
 }
 return 0;
}
