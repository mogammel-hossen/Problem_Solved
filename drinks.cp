#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
   int a[n];
   float sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<sum/n;
   return 0;
}