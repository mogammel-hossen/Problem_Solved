#include <iostream>
using namespace std;
int main() {
   int n,p,a[11],temp,s;
   cin>>n>>p;
   temp=240-p;
   while(1){
   s=(5*(n*n+n))/2;
   if(s<=temp){
       cout<<n;
       return 0;
   }
   n=n-1;
  }
    return 0;
}