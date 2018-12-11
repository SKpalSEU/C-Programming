#include<stdio.h>
int main()
{
    float weight,hight,BMI;
    printf("Enter weight and hight");
    scanf("%f%f",&weight,&hight);
    BMI=(weight/hight);
    printf("their BMI is=%f",BMI);
    if(BMI<=18.5)
    {
        printf("Underweight");
    }
    else if(BMI>=18.5&&BMI<=24.9)
    {
        printf("Normal weight");
    }
    else if(BMI>=25&&BMI<=29.9)
    {
        printf("Overweight");
    }
    else
    {
        printf(BMI>=30);
    }
}
