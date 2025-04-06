#include <iostream>
using namespace std;
int main() {
   long n,a,b,c,d;
   cin>>n;
   for (long i=n+1;i>0;i++)
   {
      a=i%10;
      b=(i/10)%10;
      c=(i/100)%10;
      d=(i/1000)%10;
       if ((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)){
           cout<<i;
           return 0;
       }
      
   }
    return 0;
}