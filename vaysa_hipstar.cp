#include <iostream>
using namespace std;
int main() {
  int n,k;
  cin>>n>>k;
  if(n>k){
      cout<<k<<" "<<(n-k)/2;
      return 0;
  }
  else if(n==k){
      cout<<n<<" "<<0;
      return 0;
  }
  else{
      cout<<n<<" "<<(k-n)/2;
      return 0;
  }
    return 0;
}