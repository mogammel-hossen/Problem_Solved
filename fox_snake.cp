#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    char str[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (i%2==0){str[i][j]='#';}
            if (i%2!=0){str[i][j]='.';}
        }
        if (i%2!=0)
        {
            if (count%2==0){count++;str[i][m-1]='#';}
            else {count++;str[i][0]='#';}
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf ("%c",str[i][j]);
        }
        printf ("\n");
    }
}