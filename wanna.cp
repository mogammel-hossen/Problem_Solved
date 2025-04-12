#include <bits/stdc++.h>
using namespace std;
int main() {
   int n,p,q,c=0;
   cin>>n;
   int a[n*2];
   cin>>p;
   for(int i=0;i<p;i++){
       cin>>a[i];
   }
   cin>>q;
   for(int i=0;i<q;i++){
       cin>>a[p++];
   }
   sort(a,a+p);
   for(int i=0;i<n;i++){
       for(int j=i;j<p;j++){
           if(a[j]==i+1){
               c++;
               break;
           }
       }
   }
   if (c==n){
       cout<<"I become the guy.";
   }
   else{
       cout<<"Oh, my keyboard!";
   }
    return 0;
}