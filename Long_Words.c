#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[100];
    scanf ("%d", &n);
    for (int i=0;i<n;i++)
    {
        scanf ("%s",&str);
        if (strlen(str)>10)
        {
            printf ("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
        }
        else {puts(str);}
    }
    return 0;
}