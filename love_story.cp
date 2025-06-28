// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[100],b[100]="codeforces";
    int t,s=0;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        s=0;
        cin>>a;
        for (int i=0;i<10;i++){
            if(a[i]!=b[i]){
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}