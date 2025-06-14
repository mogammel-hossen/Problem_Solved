#include <iostream>
using namespace std;
int main() {
   int n,t;
   cin>>t;
 for (int i=0;i<t;i++){
     cin>>n;
     if(1900<=n){
         cout<<"Division 1"<<"\n";
     }
     else if(1600<=n&&n<=1899){
         cout<<"Division 2"<<"\n";
     }
     else if(1400<=n&&n<=1599){
         cout<<"Division 3"<<"\n";
     }
     else if(n<=1399){
         cout<<"Division 4"<<"\n";
     }
 }
    return 0;
}