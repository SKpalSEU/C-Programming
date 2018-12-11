#include<stdio.h>
void main()
{
int a=1,sqr_of_a,b=2,sqr_of_b,sum;
sqr_of_a= pow(a,2);
sqr_of_b=pow(b,2);
sum=sqr_of_a+sqr_of_b;
printf("sum of %d and %d is %d",sqr_of_a,sqr_of_b,sum);
return 0;
}
