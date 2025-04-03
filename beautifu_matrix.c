#include<stdio.h>
int main ()
{
    int arr[5][5];
    int i,j,cum=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (arr[i][j]==1)
            {
                if (i>=2){cum=cum+i-2;}
                if (i<2){cum=cum+2-i;}
                if (j>=2){cum=cum+j-2;}
                if (j<2){cum=cum+2-j;}
                break;
            }
        }
    }
    printf ("%d",cum);
    return 0;
}