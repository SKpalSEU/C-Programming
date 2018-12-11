#include<stdio.h>
int main()
{
	int ara[10]={1,2,3,4,5,6,7,8,9,0},ele,i;

	printf("enter the element you want to search: ");
	scanf("%d",&ele);

	for(i=0;i<10;i++){
		if(ara[i]==ele)
			printf("\nyour element is in the %d number index of the ara\n\n",i);
	}

	return 0;
}


