#include<stdio.h>
int main ()
{
    int x,y,z,d1,d2,d3,d4,temp=0;
    scanf ("%d %d %d",&x,&y,&z);
    temp=x+y+z;
    d1=x+(y*z);
    if (temp<d1){
    temp=d1;}
    d2=(x+y)*z;
    if (temp<d2){temp=d2;}
    d3=x*y*z;
    if (temp<d3){temp=d3;}
    d4=x*(y+z);
    if (temp<d4){temp=d4;}
 
    printf ("%d",temp);
    return 0;
 
}