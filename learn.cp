#include<bits/stdc++.h>
using namespace std;
int composite (int n){
  for(int i=2;i<n/2;i++){
    if(n%i==0){
        return 1;
    }
  }
  return 0;
}
int main(){
long long int n,a=2,b,p=0;
cin>>n;
while(1){
if(p==1){
    cout<<a<<" "<<b;
    return 0;
}
else{
    a+=2;
    b=n-a;
    p=composite(b);
}
}
return 0;
}