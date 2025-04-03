#include<stdio.h>
#include<string.h>
int main ()
{
    char temp,str[100];
    int i,j;
    scanf ("%s",&str);
    for (i=0;i<strlen(str);i+=2)
    {
        for (j=0;j<strlen(str);j+=2)
        {
            if (str[i]<str[j])
            {
               temp=str[j];
               str[j]=str[i];
               str[i]=temp;
            }
        }
    }
    puts (str);
    return 0;
 
}