#include<stdio.h>
void main()
{
 int x,y=1,n;
 printf("Enter a number:");
 scanf("%d",&n);

 for(x=1;x<=n;x++)
 {
   y=y*x;
 }
 printf("\nFactorial of %d is %d",n,y);
}
