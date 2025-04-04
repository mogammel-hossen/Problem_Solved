#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,n,count=0,k;
    scanf ("%d",&n);
    scanf ("%s",str);
    for(i=0;i<=n;i++)
    {
        k=i;
        k+=1;
        if (k<n){
        if (str[i]==str[k])
        {
            count++;
        }}
    }
    printf ("%d",count);
 
    return 0;
 
}