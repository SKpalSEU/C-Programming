#include<stdio.h>
int main()
{

    float num1,num2,result;
    printf ("\n\tMy calculator");
    printf ("\nenter 1st num:");
    scanf ("%f",& num1);
    printf("\nenter 2nd num:");
    scanf ("%f",& num2);
    result=num1+num2;
    printf ("\n\nsum=%f",result);
    result=num1-num2;
    printf ("\n\nminus=%f",result);
    result=num1*num2;
    printf("\n\nmultiply=%f",result);
    result=num1/num2;
    printf ("\n\ndivition=%f",result);
    return 0;
}
