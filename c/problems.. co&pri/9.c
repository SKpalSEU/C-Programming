#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,sum,n;
    printf ("Enter five subject number");
    scanf ("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    printf ("\n\nSum of marks=%f",sum);
    n=(sum/500.00)*100.00;
    printf ("\n\nstudent gets=%f",n);
    return 0;
}
