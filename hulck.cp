#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   for (int i=1;i<n;i++)
   {
       if (i%2==0)
       {
           cout<<"I love that";
       }
       else if(i%2!=0){
           cout<<"I hate that";
       }
       cout<<" ";
   }
    if (n%2==0)
       {
           cout<<"I love it";
       }
       else if(n%2!=0){
           cout<<"I hate it";
       }
    return 0;
}