#include<stdio.h>
int main ()
{
    int t,m,c,mis=0,coun=0;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        scanf("%d %d",&m,&c);
        if (m>c){mis++;}
        if(m<c){coun++;}
    }
    if (mis>coun){printf("Mishka");}
    if (mis<coun){printf("Chris");}
    if (mis==coun){printf("Friendship is magic!^^");}
    return 0;
}