#include <stdio.h>
#include<string.h>
 
int main() {
char s[1000];
int count=1;
gets(s);
for (int i=0;i<strlen(s);i++){
     if(count==7){
         printf("YES");
         return 0;
     }
    if (s[i]==s[i+1]){
        count++;
    }
    else{
        count=1;
    }
   
}
printf("NO");
 
    return 0;
}