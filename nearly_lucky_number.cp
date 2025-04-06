#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
   char a[1000000];
   int c=0;
   cin>>a;
  
   for(int i=0;i<strlen(a);i++){
       if((a[i]=='4')||(a[i]=='7')){
          c++;
          if(c>7){
              cout<<"NO";
              return 0;
          }
       }
   }
   if(c==7||c==4){
       cout<<"YES";
       return 0;
   }
   else{
       cout<<"NO";
       return 0;
   }
    return 0;
}