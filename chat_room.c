#include <stdio.h>
#include<string.h>
int main() {
  char a[6]="hello",s[1000];
  int x=0;
 gets(s);
 for(int i=0;i<strlen(s);i++){
     if(a[x]==s[i]){
         x++;
         if(x==5){
             printf("YES");
             return 0;
         }
     }
 }
 printf("NO");
    return 0;
}