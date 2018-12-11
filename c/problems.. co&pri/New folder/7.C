#include<stdio.h>
int main()
{
    int number;
    scanf ("%d",&number);
    if (number>=80)
    {
        printf ("a+");
    }
    else if (number>=75)
    {
        printf ("a");
    }
    else if (number>=70)
    {
        printf ("a-");

    }
    else if (number>=65)
    {
        printf ("b+");
    }
    else if (number>=60)
    {
        printf ("b");
    }
    else if (number>=55)
    {
        printf ("b-");
    }
    else if (number>=50)
    {
        printf ("c+");
    }
    else if (number>=45)
    {
        printf ("c");
    }
    else if (number>=40)
    {
        printf ("d");
    }
    else
    {
        printf ("fail");
    }
    return 0;
}
