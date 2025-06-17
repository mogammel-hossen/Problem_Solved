#include <string.h>
#include <iostream>
using namespace std;
int main() {
    int t,c=0;
char a[100]="codeforces",b;
cin>>t;
for(int i=0;i<t;i++){
    cin>>b;
    c=0;
    for(int j=0;j<10;j++){
        if(b==a[j]){
            cout<<"YES"<<"\n";
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"NO"<<"\n";
    }
}
    return 0;
}