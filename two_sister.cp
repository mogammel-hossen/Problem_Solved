#include <iostream>
using namespace std;
int main() {
  int n,a,b;
  cin>>n;
  for (int i=0;i<n;i++){
      cin>>a;
      if((a==1)||(a==2)){
          cout<<0<<"\n";
      }
      else if (a>2*(a/2)){
          cout<<a/2<<"\n";
      }
      else{
          cout<<a/2-1<<"\n";
      }
  }
  
    return 0;
}