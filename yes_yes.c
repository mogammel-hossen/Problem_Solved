#include<stdio.h>
#include<string.h>
int main ()
{
    char str[5];
    int n,i,j=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%s",&str);
        if ((str[0]=='Y'||str[0]=='y')&&(str[1]=='E'||str[1]=='e')&&(str[2]=='S'||str[2]=='s'))
        {
            printf ("YES\n");
            j++;
        }
        else if (j==n)
        {
            return 0;
        }
        else
        {
            printf ("NO\n");
            j++;
        }
    }
}