#include<stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='0'||a=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("constant");

    }
}
