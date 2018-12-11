#include<stdio.h>
int main()
{
	int a,b,prim=1,from,to;
	printf("enter the range,\n from: ");
	scanf("%d",&from);
	printf(" to: ");
	scanf("%d",&to);
	for(a=from;a<=to;a++){
		for(b=2,prim=1;b<a;b++){

			if(a%b==0){
			prim=0;
			break;
		}
	}
		if(prim==1)
			printf("%d\n",a);
		}

}
