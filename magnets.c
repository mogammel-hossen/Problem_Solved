#include<stdio.h>
int main ()
{
    int n,sum=1;
    scanf ("%d",&n);
    char str[n],p;
    for (int i=0;i<n;i++)
    {
        scanf ("%s",&str[i]);
 
    }
    p=str[0];
     for (int i=1;i<n;i++)
    {
        if (p!=str[i]){sum++;}
        p=str[i];
    }
    printf("%d",sum);
    return 0;
}