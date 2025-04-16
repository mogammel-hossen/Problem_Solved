#include <iostream>
using namespace std;
int main() {
   int t,count=0,n;
   int a[5];
   cin>>t;
   for (int i=0;i<t;i++){
       count=0;
       cin>>n;
       if(n%10!=0){
           a[count++]=n%10;
           n-=n%10;
       }
       if(n%100!=0){
           a[count++]=n%100;
           n-=n%100;
       }
       if(n%1000!=0){
           a[count++]=n%1000;
           n-=n%1000;
       }
       if(n%10000!=0||n>1000){
           a[count++]=n;
       }
       cout<<count<<"\n";
       for(int j=0;j<count;j++){
           cout<<a[j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}