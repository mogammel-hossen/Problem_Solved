#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100],str2[100];
    int count=0;
    scanf ("%s",&str1);
    scanf ("%s",&str2);
    for (int i=0;i<strlen(str1);i++)
    {
        if (str1[i]<97){str1[i]=str1[i]+32;}
        if (str2[i]<97){str2[i]=str2[i]+32;}
        if (str1[i]==str2[i]){}
        if (str1[i]>str2[i]){count++; break;}
        if (str1[i]<str2[i]){count--;break;}
 
    }
    printf ("%d",count);
    return 0;
}