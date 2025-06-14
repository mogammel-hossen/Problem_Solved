#include <iostream>
#include<string.h>
using namespace std;
int main() {
   int t;
   string a;
       cin>>t;
   for(int i=0;i<t;i++){
       cin>>a;
       if((a[0]+a[1]+a[2])==(a[3]+a[4]+a[5])){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
    return 0;
}