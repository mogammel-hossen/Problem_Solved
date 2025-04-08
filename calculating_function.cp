#include <iostream>
using namespace std;
int main() {
    long long n,sum1=0,sum2=0,p;
    cin>>n;
    p=n/2+1;
    
    if(n%2==0){
        sum1=(n*(4+(n/2-1)*2))/4;
        sum2=(n*(2+(n/2-1)*2))/4;
    }
    else{
         sum1=(n/2*(4+(n/2-1)*2))/2;
        sum2=(p*(2+(p-1)*2))/2;
    }
    cout<<(sum1-sum2);
 return 0;
}