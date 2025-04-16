#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[2000],b[1000];
    int c=0;
    cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='W'){
            if(a[i+1]=='U'&&a[i+2]=='B'){
                i=i+2;
                if(c!=0&&(b[c-1]!=' ')){
                    b[c++]=' ';
                }
 
        }
         else{
            b[c++]=a[i];
        }
        }
        else{
            b[c++]=a[i];
        }
    }
  for(int i=0;i<c;i++){
    cout<<b[i];
  }
}