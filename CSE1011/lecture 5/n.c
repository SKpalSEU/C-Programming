#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf ("enter three number");
    scanf ("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    sum=b+c+a;
    printf ("%d",sum);
    return 0;
}
