#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],sum1=0,sum2=0,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum1=sum1+a[i];
    }
    sort(a,a+n);
   for(int j=n-1;j>=0;j--)
   {
       sum2=sum2+a[j];
       c++;
       if(sum2>sum1/2){
           cout<<c;
           return 0;
       }
   }
   return 0;
}