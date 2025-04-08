#include <iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main() {
    int n,p;
    cin>>n;
    if((n%4==0)||(n%7==0)||(n%47==0)){
        cout<<"YES";
        return 0;
    }
    while(n!=0){
        p=n%10;
        n=n/10;
        if(p==4||p==7){
            
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
    return 0;
}