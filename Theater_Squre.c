#include<stdio.h>
#include<math.h>
int main ()
{
    long long p;
    double n1,n2,a;
    double r1,r2;
    scanf ("%lf %lf %lf",&n1,&n2,&a);
    r1=(double)(n1/a);
    r2=(double)(n2/a);
    r1=ceil(r1);
    r2=ceil(r2);
    p=(long long)(r1*r2);
    printf ("%lld",p);
    return 0;
}