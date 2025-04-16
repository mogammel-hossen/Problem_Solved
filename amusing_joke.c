#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100],str2[100],str[100];
    int p=0;
    scanf ("%s",&str1);
    scanf ("%s",&str2);
    scanf ("%s",&str);
    for (int i=0;i<strlen(str1);i++)
    {
        for (int j=0;j<strlen(str);j++)
        {
            p=0;
            if (str1[i]==str[j]){str[j]='0';p++;break;}
        }
        if (p==0){printf ("NO");return 0;}
    }
    for (int i=0;i<strlen(str2);i++)
    {
        for (int j=0;j<strlen(str);j++)
        {
            p=0;
            if (str2[i]==str[j]){str[j]='0';p++;break;}
        }
        if (p==0){printf ("NO");return 0;}
    }
    for (int i=0;i<strlen(str);i++)
    {
        p=0;
        if (str[i]!='0'){printf ("NO");p++;return 0;}
    }
    if (p==0){printf ("YES");return 0;}
}