#include <iostream>
using namespace std;
int main() {
    int t,n,sum=0,a;
    cin>>t>>n;
    for(int i=0;i<t;i++){
        cin>>a;
        if(a>n){
            sum=sum+2;
        }
        else{
            sum=sum+1;
        }
    }
    cout<<sum;
    return 0;
}