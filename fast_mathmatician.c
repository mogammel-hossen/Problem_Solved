#include <stdio.h>
#include <string.h>
int main() {
     char A[1000],B[1000];
 int C[1000];
 gets(A);
 gets(B);
 for (int i=0;i<strlen(A);i++)
 {
     if (A[i]==B[i]){
         C[i]=0;
     }
     else{
         C[i]=1;
     }
 }
 for(int i=0;i<strlen(A);i++){
     printf("%d",C[i]);
 }
    return 0;
 
    return 0;
}
