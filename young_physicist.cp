#include <iostream>
using namespace std;
int main() {
    int t,a[3],s1=0,s2=0,s3=0;
    cin>>t;
    for (int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>a[j];
        }
        s1=s1+a[0];
        s2=s2+a[1];
        s3=s3+a[2];
    }
    if((s1==0)&&(s2==0)&&(s3==0)){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
    
    return 0;
}