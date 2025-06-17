#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,num=1;
    scanf ("%d",&n);
  while (n!=0)
    {
        num=num*2;
        if (n==num){count++;break;}
        if (n<num){count++;n=n-(num/2);num=1;}
        if (n==1){count++;break;}
    }
    printf ("%d",count);
    return 0;
}