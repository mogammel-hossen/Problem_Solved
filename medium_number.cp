#include <iostream>
using namespace std;
int main() {
 int t,a[10000],temp;
 cin>>t;
 for (int k=0;k<t;k++){
     for(int i=0;i<3;i++){
         cin>>a[i];
     }
     for(int i=0;i<3;i++){
         for(int j=i+1;j<3;j++){
             if(a[i]>a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
     cout<<a[1]<<"\n";
 }
    return 0;
}