#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
    char s[100000];
    int t=0,p=0;
    cin>>s;
    if(s[0]>=97&&s[1]>=97){
        cout<<s;
        return 0;
    }
    for(int i=0;i<strlen(s);i++){
        if((s[i]>=65)&&(s[i]<=90)){
            t++;
        }
        else if((s[0]>=97)&&(s[0]<=122)){
            p++;
        }
    }
     if(strlen(s)==t){
         for(int i=0;i<strlen(s);i++){
 
            s[i]=s[i]+32;
         }
        cout<<s;
        return 0;
    }
   if(p==strlen(s)&&p==1){
            s[0]=s[0]-32;
        cout<<s;
        return 0;
    }
 
    if(p==strlen(s)){
        cout<<s;
        return 0;
    }
    for(int i=0;i<strlen(s);i++){
        if((s[i]>=65)&&(s[i]<=90)){
          for(int j=i+1;j<strlen(s);j++){
            if((s[j]>=97)&&(s[j]<=122)){
                cout<<s;
                return 0;
            }
          }
        }
    }
 
    if((s[0]>=97)&&(s[0]<=122)){
        s[0]=s[0]-32;
    }
    for(int i=1;i<strlen(s);i++){
        if((s[i]>=65)&&(s[i]<=90)){
            s[i]=s[i]+32;
        }
    }
    cout<<s;
    return 0;
    }