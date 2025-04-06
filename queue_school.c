#include<stdio.h>
#include<string.h>
int main ()
{
    int n,t;
    scanf ("%d %d",&n,&t);
    char str[n];
    scanf ("%s",str);
    for (int i=0;i<t;i++)
    {
        for (int j=0;j<n;j++)
        {
            if ((str[j]=='B')&&(str[j+1]=='G'))
            {
                str[j]='G';
                str[j+1]='B';
                j=j+1;
            }
        }
    }
    puts(str);
    return 0;
}