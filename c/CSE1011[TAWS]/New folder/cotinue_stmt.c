#include<stdio.h>
void main()
{
 int x,n=5;

 for(x=1;x<=n;x++)
 {
  if(x==3){
    continue;
  }
  printf("%d\n",x);
 }
}
