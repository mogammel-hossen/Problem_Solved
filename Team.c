#include<stdio.h>
int main()
{
    int arr[1000][3];
    int n,i,j,count=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        if ((arr[i][0]&&arr[i][1]&&1)||(arr[i][1]&&arr[i][2]&&1)||(arr[i][0]&&arr[i][2]&&1))
            {
                count++;
            }
 
    }
    printf ("\n %d",count);
    return 0;
}