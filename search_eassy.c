#include<stdio.h>
int main ()
{
    int n,sum=0;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
        if (arr[i]==1){sum++;}
    }
    if (sum==0){printf ("EASY");}
    else if (sum!=0){printf ("HARD");}
    return 0;
}