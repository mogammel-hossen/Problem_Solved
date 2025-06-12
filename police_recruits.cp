#include<bits/stdc++.h>
using namespace std;
int main(){
int s;
cin>>s;
int a[s];
int p=0,m=0;
for(int i=0;i<s;i++){
    cin>>a[i];
}
for(int i=0;i<s;i++){
    if(a[i]==-1){
        if(p>0){
            p--;
        }
        else{
            m++;
        }
    }
    else{
        p+=a[i];
    }
}
cout<<m;
return 0;
}