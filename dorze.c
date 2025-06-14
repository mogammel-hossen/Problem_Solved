#include <stdio.h>
#include<string.h>
int main() {
   char s[2000];
   gets(s);
   for(int i=0;i<strlen(s);i++){
       if(s[i]=='.'){
           printf("%d",0);
       }
       else if(s[i]=='-'){
          if(s[i+1]=='.'){
           printf("%d",1);
           i++;
       }
       else{
          printf("%d",2);
          i++;
       }
      }
   }
    return 0;
}