#include<stdio.h>
int main ()
{
    int n,m,i,count=0,min=20000,k=0,p=0;
    scanf ("%d %d",&n,&m);
    int arr[m];
    for (i=0;i<m;i++)
    {
        scanf ("%d",&arr[i]);
        if(min>arr[i]){min=arr[i];}
    }
    for (i=0;i<m;i++)
    {
        if ((arr[i]-min)==min)
        {
            if (k==0){count+=2;k++;}
            else{
            count++;}
        }
        if (arr[i]!=min)
        {
            p=0;
            for (int j=i+1;j<m;j++)
            {
                if (arr[j]!=min)
                {
                    if (arr[i]-arr[j]==min)
                    {
                        if (p==0){count+=2;p++;}
                        else {
                        count++;}
                    }
                }
            }
        }
    }
    printf ("%d",count);
    return 0;
}