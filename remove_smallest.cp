#include <iostream>
using namespace std;
int main() {
    int t,n,a[100],p=0,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
           
            if(abs(a[p]-a[i+1])<=1){
                if(a[p]<a[i+1]){
                    a[p]=0;
                    p=i+1;
                }
                else if(a[p]>a[i+1]) {
                    a[i+1]=0;
                }
                else if(a[p]==a[i+1]){
                    a[i+1]=0;
                }
            }
            else{
                cout<<"NO"<<"\n";
                count=1;
                break;
                
            }
        }
        if(count==0){
        cout<<"YES"<<"\n";
        }
    }
    return 0;
}