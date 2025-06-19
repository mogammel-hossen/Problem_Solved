#include <math.h>
#include <iostream>
using namespace std;
int main() {
    long long n,p[10000],big=0,sum=0,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    big=p[0];
    for(int i=0;i<n;i++)
    {
       if(big<p[i]){
           big=p[i];
       }
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+(big-p[i]);
    }
    cout<<sum;
    return 0;
}