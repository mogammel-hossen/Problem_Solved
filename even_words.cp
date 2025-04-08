#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,p,r;
    cin>>n>>p;
  if(n%2==0){
      r=n/2;
      }
      else{
          r=(n+1)/2;
      }
      if(p<=r){
          cout<<p*2-1;
          return 0;
      }
      else{
          cout<<(p-r)*2;
          return 0;
      }
  
   return 0;
}