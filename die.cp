#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,n;
cin>>x>>y;
if(x==0||y==0){
    cout<<0<<"/"<<1;
    return 0;
}
if(x==y||x>y){
    n=6-x+1;
    if(n==6){
        cout<<1<<"/"<<1;
        return 0;
    }
    for(int i=2;i<7;i++){
        if(n%i==0&&6%i==0){
            cout<<n/i<<"/"<<6/i;
            return 0;
        }
    }
     cout<<n<<"/"<<6;
    return 0;
}
else{
    n=6-y+1;
    if(n==6){
        cout<<1<<"/"<<1;
        return 0;
    }
    for(int i=2;i<7;i++){
        if(n%i==0&&6%i==0){
            cout<<n/i<<"/"<<6/i;
            return 0;
        }
    }
    cout<<n<<"/"<<6;
    return 0;
}
return 0;
}
 