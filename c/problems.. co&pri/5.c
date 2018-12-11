#include<stdio.h>
int main()
{
    float g,result,a,b,c;
    printf ("Enter A man's basic salary :");
    scanf ("%f",&g);
    a=(30*g)/100;
    b=(5*g)/100;
    c=1000;
    result=(a+b+c+g);
    printf ("his gross salary is=%.2f",result);
    return 0;
}
