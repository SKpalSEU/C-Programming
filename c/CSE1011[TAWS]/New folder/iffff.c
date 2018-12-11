#include<stdio.h>
void main()
{
char char1='A',char2=')';
scanf("%c %c",&char1,&char2);
printf("%c %c",char1,char2);
printf("\n%d %d",char1,char2);

if((char1>='a' && char1<='z') || (char1>='A' && char1<='Z'))
    printf("Its a alphabet.");
else
    printf("Sorrry!!!Not a alphabet.");

}
