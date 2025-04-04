#include<stdio.h>
int main ()
{
    int n,sum=0;
    int arr[5]={5,4,3,2,1};
    scanf("%d",&n);
    for (int i=0;i<5;i++)
    {
        if (n>=arr[i])
        {
            sum = sum+n/arr[i];
            n=n%arr[i];
        }
    }
    printf ("%d",sum);
    return 0;
}