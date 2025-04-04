#include<stdio.h>
int main ()
{
    int k,n,t,sum=0;
    scanf ("%d %d %d",&k,&n,&t);
    for (int i=1;i<=t;i++)
    {
       sum=sum+i*k;
    }
    if (sum>n){
    printf ("%d",sum-n);}
    else {printf ("%d",sum-sum);}
    return 0;
}