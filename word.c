#include<stdio.h>
#include<string.h>
int main ()
{
    int up=0,low=0,i;
    char str[100];
    scanf("%s",&str);
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]>=97)
        {
            low++;
        }
        else{up++;}
    }
    if (up>low)
    {
        for (i=0;i<strlen(str);i++)
        {
            if (str[i]>=97)
            {
                str[i]=str[i]-32;
            }
        }
        puts (str);
        return 0;
    }
    else if (low>=up)
    {
        for (i=0;i<strlen(str);i++)
        {
            if (str[i]<91)
            {
                str[i]=str[i]+32;
            }
        }
        puts (str);
        return 0;
    }
    return 0;
}