#include<stdio.h>
#include<string.h>
int main ()
{
    int a=0;
    char str[4]="HQ9",str1[100];
    scanf ("%s",&str1);
    for (int i=0;i<strlen(str1);i++)
    {
        for (int j=0;j<3;j++)
        {
            if (str[j]==str1[i]){a++;break;}
        }
        if (a!=0){break;}
    }
    if (a!=0){printf ("YES");}
    else {printf ("NO");}
    return 0;
}