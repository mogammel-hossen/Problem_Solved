#include <stdio.h>
int main  ()
{
    int arr[5]={100,20,10,5,1};
    int sum=0,i,n;
    scanf ("%d",&n);
    while (n!=0)
    {
        for (i=0;i<5;i++)
        {
            if (arr[i]<=n)
            {
                sum=sum+n/arr[i];
                n=n%arr[i];
                if (n==0){break;}
            }
        }
    }
    printf ("%d",sum);
    return 0;
 
}