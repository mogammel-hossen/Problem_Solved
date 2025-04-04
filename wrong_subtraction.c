#include<stdio.h>
int main ()
{
    int t,n,i;
    scanf("%d %d",&n,&t);
    for (i=0;i<t;i++)
    {
        if (n%10==0)
        {
            n=n/10;
        }
        else if (n%10!=0)
            {n=n-1;}
    }
    printf ("%d",n);
}