#include<iostream>
using namespace std;
int main()
{
    int n,A[4],p=0;
    cin>>n;
     for (int i=0;i<n;i++)
     {
         cin>>A[0]>>A[1]>>A[2]>>A[3];
         for (int j=1;j<4;j++){
             if(A[0]<A[j]){
                 
                 p++;
             }
         }
         cout<<p<<"\n";
         p=0;
     }
     return 0;
}