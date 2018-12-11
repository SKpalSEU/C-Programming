#include<stdio.h>
main()
{
char char1;
scanf("%c",&char1);
if(char1>='A' && char1<'Z'||char1>='a' && char1<='z')
printf("It's a character");
else
printf("Sorry!!!It's not a character");
}
