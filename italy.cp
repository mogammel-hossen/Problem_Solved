#include<iostream>
using namespace std;
int main()
{
    long n,p,a,b;
    cin>>n;
    p=n;
   if (n>0){
       cout<<n;
       return 0;
   }
   if (n==-10)
   {
       cout<<0;
       return 0;
   }
   
     else if(n<0)
       {
           a=(n%10)*-1;
           b=((p/10)%10)*-1;
           if((a>b)||(a==b)){
               cout<<n/10;
               return 0;
           }
           if(a<b){
               cout<<n/10+(b-a);
               return 0;
           }
         
       }
}