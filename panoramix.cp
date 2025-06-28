// Online C++ compiler to run C++ program online
#include <string.h>
#include <iostream>
using namespace std;
int main() {
  long long a[10000]={0},n,m,count=0,p[100];
  cin>>n>>m;
for (int i=2;i<=50;i++){
    if (a[i]==0){
        for(int j=i*i;j<=50;j=j+i){
            a[j]=1;
        }
    }
}
for(int i=0;i<50;i++){
    if(a[i]==0){
        p[count]=i;
        count++;
    }
}
for(int i=0;i<count;i++){
    if(n==p[i]){
        if(p[i+1]==m){
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
}


    return 0;
}