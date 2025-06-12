#include <iostream>
using namespace std;
int main() {
  int n,k,p=1,temp,r;
  cin>>n>>k;
  while(1){
      temp=n*p;
      r=temp%10;
      if(r==0||r==k){
          cout<<p;
          return 0;
      }
      p++;
  }
  
    return 0;
}