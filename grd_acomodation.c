#include<stdio.h>
int main ()
{
    int r,n,c,sum=0;
    scanf ("%d",&r);
    for (int i=0;i<r;i++)
    {
        scanf ("%d %d",&n,&c);
        if ((c-n)>=2){sum++;}
    }
    printf ("%d",sum);
    return 0;
 
}