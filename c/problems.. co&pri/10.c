#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
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
    j=(b+d+f+h+i);
    printf ("the value of b=%d\nthe value of d=%d\nthe value of f=%d\nthe value of h=%d\nthe value of i=%d the value of j=%d\n",b,d,f,h,i,j);
    return 0;
}
