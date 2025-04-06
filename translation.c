#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100],str2[100];
    int i=0,l=0,count=0;
    scanf ("%s",&str1);
    scanf ("%s",&str2);
    l=strlen(str2)-1;
    while (i<strlen(str1))
    {
        if (str1[i]==str2[l]){i++;l--;}
        else {count++;break;}
 
    }
    if (count==0){printf ("YES");}
    else {printf ("NO");}
    return 0;
}