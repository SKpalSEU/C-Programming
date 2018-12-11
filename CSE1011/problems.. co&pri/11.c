#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf ("enter five number");
    scanf ("%d",&a);
    b=a/10000;
    c=a%10000;
    d=c/1000;
    e=c%1000;
    f=e/100;
    g=e%100;
    h=g/10;
    i=g%10;
    printf ("%d\n%d\n%d\n%d\n%d",b,d,f,h,i);
    printf ("\n\n%d\n%d\n%d\n%d\n%d",i,h,f,d,b);
}
