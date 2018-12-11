#include<stdio.h>
int main()
{
	int ara[10]={1,2,3,5,7,8,9,0,3,5},e,i,n;
	 printf("enter the element you want to insert: ");
	 scanf("%d",&e);
	 printf("enter the index number for your element: ");
	 scanf("%d",&i);

	 ara[i]=e;

	 printf("the new ara is: ");
	 for(n=0;n<10;n++){
	 	printf("%d ",ara[n]);
	 }
     return 0;
}
