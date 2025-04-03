#include<stdio.h>
int main ()
{
    int n,k,count=0;
    scanf ("%d %d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
 
 
        for (int i=0;i<n;i++)
        {
            if (arr[k-1]<=arr[i])
            {
                if (arr[i]>0){
                    count++;}
            }
        }
 
    if (count==0){
    printf ("%d",count);}
    else {printf ("%d",count);}
    return 0;
}
