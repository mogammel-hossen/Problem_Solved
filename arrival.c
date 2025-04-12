#include<stdio.h>
int main ()
{
    int n,hig=0,min=1000,p1=0,p2=0,count=0,temp;
    scanf("%d",&n);
    int str[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
        if (str[i]>hig){hig=str[i];p1=i;}
        if (str[i]<=min){min=str[i];p2=i;}
    }
    if (p1>p2){p1=p1-1;}
    while (1)
    {
        if (str[0]==hig&&str[n-1]==min){break;}
        if (str[n-1]==min)
        {
            if (str[0]==hig)
            {
                break;
            }
            else {
            temp=str[p1];
            str[p1]=str[p1-1];
            str[p1-1]=temp;
            count++;
            p1--;}
        }
          else {
            temp=str[p2];
            str[p2]=str[p2+1];
            str[p2+1]=temp;
            count++;
            p2++;}
    }
    printf ("%d",count);
    return 0;
}