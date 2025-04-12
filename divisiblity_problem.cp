#include <iostream>
using namespace std;
int main() {
    int t,a,b,p;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<"\n";
        }
        else{
            if(a%b==0){
                cout<<0<<"\n";
            }
            else{
                p=a/b;
                cout<<(p+1)*b-a<<"\n";
            }
        }
    }
    return 0;
}