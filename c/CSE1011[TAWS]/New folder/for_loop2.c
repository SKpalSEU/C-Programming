#include<stdio.h>
void main()
{
 int x,y,z,k,n;
 printf("enter number of students");
 scanf("%d",&n);

 for(k=1;k<=n;k++)
 {
 printf("Enter three numbers:");
 scanf("%d %d %d",&x,&y,&z);

 printf("Their Average %d\n",(x+y+z)/3);
 }

}
