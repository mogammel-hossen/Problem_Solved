#include <bits/stdc++.h>
using namespace std;
int main() {
 int a[10000],tax=0,t,n;
 a[10]={0};
 cin>>t;
 for (int i=0;i<t;i++){
    cin>>n;
    a[n]++;
 }
 tax = a[4]+a[3];
 a[1]=a[1]-a[3];
 if(a[1]<0){
     a[1]=0;
 }
 tax = tax + a[2]/2;
 if(a[2]%2==0){
     a[2]=0;
 }
 else{
     a[2]=a[2]*2-a[2]/2*4;
 }
 a[1]=a[1]+a[2];
 if(a[1]%4==0){
     tax =tax +a[1]/4;
 }
 else{
   tax =tax +a[1]/4+1;
 }
 cout<<tax;
     return 0;
 }