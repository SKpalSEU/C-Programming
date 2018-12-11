#include<stdio.h>
void main()
{
 int x,n=5;

 for(x=1;x<=n;x++)
 {
  if(x==3){
    break;
    printf("inside the loop");
  }
  printf("%d\n",x);
 }
 printf("outside the loop");

}
