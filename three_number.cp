#include <iostream>
using namespace std;
int main() {
 int p[5],a,b,c,j,sum;
 for (int i=0;i<4;i++){
     cin>>p[i];
 }
 sum=p[0];
 j=0;
 for(int i=1;i<4;i++){
     if(sum<p[i]){
         sum=p[i];
         j=i;
     }
 }
 if (j==0)
 {
     a=sum-p[1];
     b=p[2]-a;
     c=p[1]-b;
 }
  else if (j==1)
 {
     a=sum-p[0];
     b=p[2]-a;
     c=p[0]-b;
 }
  else if (j==2)
 {
     a=sum-p[1];
     b=p[3]-a;
     c=p[1]-b;
 }
  if (j==3)
 {
     a=sum-p[1];
     b=p[2]-a;
     c=p[1]-b;
 }
 cout <<a<<" "<<b<<" "<<c;
 
    return 0;
}