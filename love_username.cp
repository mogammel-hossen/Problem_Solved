#include <iostream>
using namespace std;
int main() {
   int n,a[100000],s=0;
   cin>> n;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int max=a[0],min=a[0];
   for(int i=1;i<n;i++){
       if(a[i]>max){
           max=a[i];
           s++;
       }
       else if(a[i]<min){
           min=a[i];
           s++;
       }
   }
   cout<<s;
    return 0;
}