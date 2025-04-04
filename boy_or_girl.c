#include<stdio.h>
#include<string.h>
int main ()
{
    char temp,str[100];
    int i,j,count=0;
    scanf ("%s",&str);
    for (i=0;i<strlen(str);i++)
    {
        for (j=i+1;j<strlen(str);j++)
        {
            if (str[i]==str[j])
            {
                str[j]='A';
            }
 
        }
    }
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]!='A')
        {
                count++;
        }
    }
 
    if (count%2==0)
    {
        puts("CHAT WITH HER!");
    }
    else if (count%2!=0)
    {
        puts("IGNORE HIM!");
    }
    return 0;
}