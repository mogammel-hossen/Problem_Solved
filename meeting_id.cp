#include <iostream>
using namespace std;
int main() {
    int a[3],m,p;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    m=a[0];
    p=m;
    for(int i=1;i<3;i++){
        if(m<a[i]){
            m=a[i];
        }
        else if(p>a[i]){
            p=a[i];
        }
        
    }
    cout<<m-p;
    return 0;
}