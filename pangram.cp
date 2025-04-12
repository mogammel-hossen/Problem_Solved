#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
int s=0,n;
cin>>n;
char a[10000];
cin>>a;
if(n<26){
    cout<<"NO";
    return 0;
}
for(int i=65;i<=90;i++){
    for(int j=0;j<n;j++){
        if(a[j]==i||a[j]==i+32){
            s++;
            break;
        }
    }
}
if(s==26){
    cout<<"YES";
}
else{
    cout<<"NO";
}
    return 0;
}