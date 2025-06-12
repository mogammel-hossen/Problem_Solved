#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, l, c, d, p, nl, np,s=0,a[4];
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  a[0]=(k*l)/nl;
  a[1]=c*d;
  a[2]=p/np;
  s=a[0];
  for(int i=0;i<3;i++){
      if(s>a[i]){
          s=a[i];
      }
  }
  cout<<s/n;
 
    return 0;
}