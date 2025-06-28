// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n,j,t,c;
   cin>>t;
   for(int i=0;i<t;i++){
       cin>>n;
       if((n/2)%2!=0){
           cout<<"NO"<<"\n";
       }
       else{
           cout<<"YES"<<"\n";
           j=0;
           for(int k=0;k<n/2;k++){
               j=j+2;
               cout<<j<<" ";
           }
           c=1;
           for(int p=1;p<n/2;p++){
               cout<<c<<" ";
               c=c+2;
           }
           cout<<j+(n/2-1)<<"\n";
       }
   }
  
   return 0;
}