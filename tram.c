#include<stdio.h>
int main()
{
    int n,m,sum=0,tem=0,t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        scanf ("%d %d",&n,&m);
        m=m-n;
        sum = sum+m;
        if (tem<sum){tem=sum;}
    }
    printf ("%d",tem);
    return 0;
}