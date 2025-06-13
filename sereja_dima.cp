#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,s=0,s1=0,a[100002];
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int l=0,r=n-1,z=0;
while(l<=r){
      if(z%2==0){
          if(a[r]>a[l]){
              s=s+a[r];
              r--;
          }
          else{
              s=s+a[l];
              l++;
          }
      }
      else{
          if(a[r]>a[l]){
              s1=s1+a[r];
              r--;
          }
          else{
              s1=s1+a[l];
              l++;
          }
      }
      z++;
  }
      cout<<s<<" "<<s1;
 
    return 0;
}